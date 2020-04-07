//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class AWEInsightsShopUploadImagePickerController, NSDictionary, NSString, NSTimer, UIViewController;

@interface AWEInsightsShopDataController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIViewController *_baseViewController;
    long long _source;
    CDUnknownBlockType _completion;
    AWEInsightsShopUploadImagePickerController *_pickerController;
    NSString *_type;
    NSDictionary *_uploadParameters;
    NSTimer *_timeoutTimer;
    double _compressRatio;
}

+ (id)sharedInstance;
@property(nonatomic) double compressRatio; // @synthesize compressRatio=_compressRatio;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSDictionary *uploadParameters; // @synthesize uploadParameters=_uploadParameters;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) AWEInsightsShopUploadImagePickerController *pickerController; // @synthesize pickerController=_pickerController;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) __weak UIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
- (void).cxx_destruct;
- (void)uploadImage:(id)arg1;
- (id)errorToastOfImage:(id)arg1 imageFileSize:(double)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)openPhotoAlbum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
