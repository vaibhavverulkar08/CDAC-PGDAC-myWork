package com.dac.placement.api.services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.dac.placement.api.entity.Student;
import com.dac.placement.api.repository.StudentRepository;

@Service
public class StudentService1 {
	
	@Autowired
	StudentRepository studentRepository1;
	
	public List<Student> showAllStudent(){
		List<Student> lst=(List<Student>)studentRepository1.findAll();
		return lst;
	}

	public void addStudent(Student stud) {
		studentRepository1.save(stud);
	}

//	public Student getStudent(int sid) {
//		Student stud=studentRepository1.findById(sid).get();
//		return stud;
//	}

//	public void update(Student s,int sid) {
//		Student oldStud=studentRepository1.findById(sid).get();
//		oldStud=s;
//		studentRepository1.save(oldStud);
//	}
	
	
	public Student getStudent(int sid) {
		Student stud=null;
		try {
			stud= studentRepository1.findById(sid).get();
		}
		catch(Exception e){	
		}
		return stud;
	}
	
	public void update(Student s,int sid) {
		Student oldStud=studentRepository1.findById(sid).get();
		if (oldStud.getId()==sid) 
		{
			oldStud.setId(sid);
			oldStud.setName(s.getName());
			oldStud.setEmail(s.getEmail());
			oldStud.setCity(s.getCity());
			oldStud.setPassword(s.getPassword());
			studentRepository1.save(oldStud);
		}
		
	}

	public void delete(int sid) {
		studentRepository1.deleteById(sid);
	}
}