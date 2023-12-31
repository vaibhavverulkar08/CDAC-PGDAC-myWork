package com.dac.placement.api.controller;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.HttpStatusCode;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.RestController;

import com.dac.placement.api.entity.Student;
import com.dac.placement.api.services.StudentService1;
//import com.dac.placement.api.services.StudentService;

//@Controller

@RestController
public class StudentController {
		
		@Autowired
		StudentService1 studentService1;
		private ResponseEntity<Object> responseEntity;
		
//		@RequestMapping(path = "/",method = RequestMethod.GET)
//		@GetMapping("/")
//		public String test() {
//			return "Just Test";
//		}
		
		
		@GetMapping("/students")
		public ResponseEntity<List<Student>> getStudents(){
			List<Student> lst =studentService1.showAllStudent();
			if(lst.isEmpty()) {
				 return ResponseEntity.status(HttpStatus.NO_CONTENT).build();
			}
			else {
				return ResponseEntity.status(HttpStatus.FOUND).body(lst);
			} 
		}
		

		@GetMapping("/students/{sid}")
		public ResponseEntity<Student> getStudent(@PathVariable int sid){
			try {
//			Student stud=null;
			Student stud = studentService1.getStudent(sid);
			if(stud!=null) 
				{
//				return ResponseEntity.OK(stud);
				return ResponseEntity.status(HttpStatus.OK).body(stud);
				}
			else
				{
					return ResponseEntity.status(HttpStatus.NO_CONTENT).build();
				}
			} 
			catch (Exception e) {
				 return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).build();		
			}
		}
		
		@PostMapping("/students")
		public ResponseEntity<Void> addStudent(@RequestBody Student stud) {
			try {
			studentService1.addStudent(stud);
			return ResponseEntity.status(HttpStatus.CREATED).build();
			}
			catch(Exception e){
				 return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).build();
			}
		}
		
			@PutMapping("/students/{sid}")
			public ResponseEntity<Void> updateStudent(@RequestBody Student stud,@PathVariable int sid) {
			
			try {
				studentService1.update(stud, sid);
				return ResponseEntity.status(HttpStatus.ACCEPTED).build();
				}
				catch(Exception e){
					 return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).build();
				}
			}
			
			@DeleteMapping("/students/{sid}")
			public ResponseEntity<Void> deleteStudent(@PathVariable int sid) {
				try {
					studentService1.delete(sid);
					return ResponseEntity.status(HttpStatus.NO_CONTENT).build();
					}
					catch(Exception e){
						 return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).build();
					}
			}
			
			
//		@GetMapping("/students")
//		public List<Student> getStudents(){
//			return studentService1.showAllStudent();
//		}

//		@GetMapping("/students/{sid}")
//		public Student getStudent(@PathVariable int sid){
//			return studentService1.getStudent(sid);
//		}
		
//		@PostMapping("/students")
//		public void addStudent(@RequestBody Student stud) {
//			studentService1.addStudent(stud);
//		}
//		
//		@PutMapping("/students/{sid}")
//		public void updateStudent(@RequestBody Student stud,@PathVariable int sid) {
//			studentService1.update(stud, sid);
//		}
			
//		@DeleteMapping("/students/{sid}")
//		public void deleteStudent(@PathVariable int sid) {
//			studentService1.delete(sid);
//		}
			
}
