//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AudioSessionNotificationHandler : NSObject
{
    // Error parsing type: ^{AudioDevice={mutex={_opaque_pthread_mutex_t=q[56c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}@^{OpaqueAudioComponentInstance}^{OpaqueAudioComponent}^{AudioBufferList}ddiBBBB@{AudioStreamBasicDescription=dIIIIIIII}{atomic<bool>=AB}BBB{function<void (AudioBufferList *, int, void *)>={type=[24C]}^{__base<void (AudioBufferList *, int, void *)>}}{function<void (AudioBufferList *, int, AudioBufferList *, AudioBufferList *, void *)>={type=[24C]}^{__base<void (AudioBufferList *, int, AudioBufferList *, AudioBufferList *, void *)>}}^v^v^vdq}, name: _source
    struct mutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: v24@0:8^{AudioDevice={mutex={_opaque_pthread_mutex_t=q[56c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}@^{OpaqueAudioComponentInstance}^{OpaqueAudioComponent}^{AudioBufferList}ddiBBBB@{AudioStreamBasicDescription=dIIIIIIII}{atomic<bool>=AB}BBB{function<void (AudioBufferList *, int, void *)>={type=[24C]}^{__base<void (AudioBufferList *, int, void *)>}}{function<void (AudioBufferList *, int, AudioBufferList *, AudioBufferList *, void *)>={type=[24C]}^{__base<void (AudioBufferList *, int, AudioBufferList *, AudioBufferList *, void *)>}}^v^v^vdq}16, name: setAudioSource:
- (void)handleInterruption:(id)arg1;
- (void)handleRouteChangeNotification:(id)arg1;

@end
