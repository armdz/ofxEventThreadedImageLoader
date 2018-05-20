
Usage its like ofxThreadedImageLoader, but if you add:

ofAddListener(ImageLoaderEvent().events,this,&YourClassName::YourCallback);

void  YourClassName::YourCallback(ImageLoaderEvent &_e)
{
	//	_e.loaded (true,false)
	//	_e.error_msg (string)
}