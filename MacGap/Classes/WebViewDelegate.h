#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@class Sound;
@class Dock;
@class Growl;
@class Notice;
@class Path;
@class App;
@class Window;
@class Clipboard;
@class Menus;
@class FileSystem;

@class WindowController;

@interface WebViewDelegate : NSObject {
	Sound* sound;
    Dock* dock;
    Growl* growl;
    Notice* notice;
    Path* path;
    App* app;
    Window* window;
    Clipboard* clipboard;
    Menus* menus;
    FileSystem *fs;
}



@property (nonatomic, retain) Sound* sound;
@property (nonatomic, retain) Dock* dock;
@property (nonatomic, retain) Growl* growl;
@property (nonatomic, retain) Notice* notice;
@property (nonatomic, retain) Path* path;
@property (nonatomic, retain) App* app;
@property (nonatomic, retain) Window* window;
@property (nonatomic, retain) Clipboard* clipboard;
@property (nonatomic, retain) Menus* menus;
@property (nonatomic, retain) FileSystem* fs;

@property (nonatomic, retain) WindowController *requestedWindow;

@end
