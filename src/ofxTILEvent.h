//
//  ofxTILEvent.h
//
//  Created by lolo on 3/20/17.
//
//

#ifndef ofxTILEvent_h
#define ofxTILEvent_h
#include "ofMain.h"

//  TIL is for ofxThreadedImageLoader

class ofxTILEvent : public ofEventArgs{
public:
  ofxTILEvent()
  {
    loaded = false;
    error_msg = "";
  };
  ~ofxTILEvent()
  {
    
  };
  bool    loaded;
  string  error_msg;
  static  ofEvent <ofxTILEvent> events;
};


#endif /* ofxTILEvent_h */
