# ofxThreadedImageLoader

Usage its like ofxThreadedImageLoader, but if you add:



ofAddListener(ImageLoaderEvent().events,this,&**YourClassName::YourCallback**);



You get an event knowing if the image its loaded ok or not, and why.

```
void YourClassName::YourCallback(ImageLoaderEvent &_e) { 
    
	//	_e.loaded (true,false) 
    
	//	_e.error_msg (string) 

}
```
