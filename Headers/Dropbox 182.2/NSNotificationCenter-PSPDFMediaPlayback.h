//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (PSPDFMediaPlayback)
- (void)pspdf_unregisterFromMediaPlaybackNotifications:(id)arg1;
- (void)pspdf_registerForMediaPlaybackNotifications:(id)arg1;
- (id)pspdf_observerForMediaPlaybackNotifications:(id)arg1;
- (id)pspdf_addObserver:(id)arg1 name:(id)arg2 object:(id)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)pspdf_addObserver:(id)arg1 name:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)pspdf_postMainThreadNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)pspdf_postMainThreadNotification:(id)arg1 object:(id)arg2;
@end

