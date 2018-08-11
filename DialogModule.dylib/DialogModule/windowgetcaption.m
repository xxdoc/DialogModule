#import <Cocoa/Cocoa.h>

const char *cocoa_window_get_caption(void *window_handle)
{
    NSWindow *window;
    window = (NSWindow *)window_handle;
    
    return [[window title] UTF8String];
}
