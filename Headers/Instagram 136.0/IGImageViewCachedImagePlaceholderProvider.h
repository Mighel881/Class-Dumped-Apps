//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGImageViewPlaceholderProviding-Protocol.h>

@class IGImageRequest, IGImageURL, NSString, UIImage;

@interface IGImageViewCachedImagePlaceholderProvider : NSObject <IGImageViewPlaceholderProviding>
{
    IGImageURL *_imageURL;
    NSString *_imageModule;
    IGImageRequest *_imageRequest;
    UIImage *_image;
}

- (void).cxx_destruct;
- (_Bool)hideProgressiveScansIfPlaceholderShown;
- (void)placeholderImageForViewSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlaceholderImageURL:(id)arg1 module:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

