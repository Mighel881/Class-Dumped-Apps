//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGDirectAvatarViewSpec, IGPhoto, IGProfileImage, NSString, UIImage;

@interface IGActionableConfirmationToastViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_text_annotatedTitleText;
    NSString *_text_annotatedSubtitleText;
    NSString *_text_rightButtonText;
    long long _text_backgroundColorType;
    IGPhoto *_photo_thumbnail;
    double _photo_thumbnailWidth;
    NSString *_photo_annotatedTitleText;
    NSString *_photo_rightButtonText;
    long long _photo_backgroundColorType;
    UIImage *_localImage_localImage;
    double _localImage_imageWidth;
    NSString *_localImage_annotatedTitleText;
    NSString *_localImage_annotatedSubtitleText;
    NSString *_localImage_rightButtonText;
    long long _localImage_backgroundColorType;
    IGProfileImage *_avatar_frontProfileImage;
    IGProfileImage *_avatar_backProfileImage;
    IGDirectAvatarViewSpec *_avatar_avaterViewSpec;
    double _avatar_avatarViewWidth;
    NSString *_avatar_annotatedTitleText;
    NSString *_avatar_annotatedSubtitleText;
    NSString *_avatar_rightButtonText;
    long long _avatar_backgroundColorType;
}

+ (id)textWithAnnotatedTitleText:(id)arg1 annotatedSubtitleText:(id)arg2 rightButtonText:(id)arg3 backgroundColorType:(long long)arg4;
+ (id)photoWithThumbnail:(id)arg1 thumbnailWidth:(double)arg2 annotatedTitleText:(id)arg3 rightButtonText:(id)arg4 backgroundColorType:(long long)arg5;
+ (id)localImageWithLocalImage:(id)arg1 imageWidth:(double)arg2 annotatedTitleText:(id)arg3 annotatedSubtitleText:(id)arg4 rightButtonText:(id)arg5 backgroundColorType:(long long)arg6;
+ (id)avatarWithFrontProfileImage:(id)arg1 backProfileImage:(id)arg2 avaterViewSpec:(id)arg3 avatarViewWidth:(double)arg4 annotatedTitleText:(id)arg5 annotatedSubtitleText:(id)arg6 rightButtonText:(id)arg7 backgroundColorType:(long long)arg8;
- (void).cxx_destruct;
- (void)matchText:(CDUnknownBlockType)arg1 photo:(CDUnknownBlockType)arg2 localImage:(CDUnknownBlockType)arg3 avatar:(CDUnknownBlockType)arg4;

@end

