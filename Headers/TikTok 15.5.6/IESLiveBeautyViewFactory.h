//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveBeautyProvider-Protocol.h"

@class NSString;

@interface IESLiveBeautyViewFactory : NSObject <IESLiveBeautyProvider>
{
    _Bool useNewStyleOpenLive;
}

@property(nonatomic) _Bool useNewStyleOpenLive; // @synthesize useNewStyleOpenLive;
- (id)slideBeautyPickerViewWithFrame:(struct CGRect)arg1 isLive:(_Bool)arg2 isLandscape:(_Bool)arg3;
- (id)beautyPickerViewWithFrame:(struct CGRect)arg1 isLive:(_Bool)arg2 isCombine:(_Bool)arg3 isLandscape:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
