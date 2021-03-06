//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, IGProfilePictureImageView, NSArray, NSMutableArray;

@interface IGProfilePictureAnimationCoordinator : NSObject
{
    IGProfilePictureImageView *_imageView;
    NSArray *_imageURLs;
    NSMutableArray *_images;
    long long _currentImageIndex;
    FBTimer *_animationTimer;
}

@property(retain, nonatomic) FBTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) long long currentImageIndex; // @synthesize currentImageIndex=_currentImageIndex;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(readonly, copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(readonly, nonatomic) __weak IGProfilePictureImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)_candidateImage;
- (void)stopUpdating;
- (void)_startUpdating;
- (void)restart;
- (id)initWithImageView:(id)arg1 imageURLs:(id)arg2 imageProcessor:(id)arg3 module:(id)arg4;

@end

