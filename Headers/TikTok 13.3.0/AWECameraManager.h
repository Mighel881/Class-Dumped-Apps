//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface AWECameraManager : NSObject
{
    _Bool _shouldPreventNewRecordController;
    UIViewController *_lastExsitRecorderController;
}

+ (id)sharedManager;
@property(nonatomic) __weak UIViewController *lastExsitRecorderController; // @synthesize lastExsitRecorderController=_lastExsitRecorderController;
@property(nonatomic) _Bool shouldPreventNewRecordController; // @synthesize shouldPreventNewRecordController=_shouldPreventNewRecordController;
- (void).cxx_destruct;

@end
