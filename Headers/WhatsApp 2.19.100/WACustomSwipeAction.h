//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface WACustomSwipeAction : NSObject
{
    CDUnknownBlockType _handler;
    NSString *_title;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    UIImage *_image;
}

+ (id)destructiveActionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
