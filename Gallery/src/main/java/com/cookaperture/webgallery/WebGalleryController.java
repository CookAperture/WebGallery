package com.cookaperture.webgallery;

import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;

@RestController
public class WebGalleryController 
{
    @RequestMapping("/")
	public String index() {
		return "Greetings from Spring Boot!";
    }
    
    @GetMapping("/hello")
	public String hello(@RequestParam(value = "name", defaultValue = "World") String name) 
	{
		return String.format("Hello %s!", name);	
	}
}
