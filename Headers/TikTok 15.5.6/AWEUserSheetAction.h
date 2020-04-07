//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage, UIView;

@interface AWEUserSheetAction : NSObject
{
    _Bool _hideBottomLine;
    _Bool _contentViewUserInteractionEnabled;
    _Bool _disableAnimation;
    NSString *_title;
    UIView *_contentView;
    double _contentHeight;
    CDUnknownBlockType _handler;
    UIImage *_icon;
    unsigned long long _style;
}

+ (id)actionWithContentView:(id)arg1 disableAnimation:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)actionWithContentView:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)actionWithTitle:(id)arg1 style:(unsigned long long)arg2 icon:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)actionWithTitle:(id)arg1 icon:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)actionWithTitle:(id)arg1 style:(unsigned long long)arg2 imgName:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)actionWithTitle:(id)arg1 imgName:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool disableAnimation; // @synthesize disableAnimation=_disableAnimation;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool contentViewUserInteractionEnabled; // @synthesize contentViewUserInteractionEnabled=_contentViewUserInteractionEnabled;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)trigger;

@end
