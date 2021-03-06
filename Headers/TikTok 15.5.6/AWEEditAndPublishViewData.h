//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEEditAndPublishViewData : NSObject
{
    NSString *_title;
    NSString *_imageName;
    NSString *_selectedImageName;
    CDUnknownBlockType _actionBlock;
    Class _buttonClass;
    NSString *_idStr;
    CDUnknownBlockType _extraConfigBlock;
    unsigned long long _type;
}

+ (id)dataWithTitle:(id)arg1 imageName:(id)arg2 selectedImageName:(id)arg3 idStr:(id)arg4 actionBlock:(CDUnknownBlockType)arg5 buttonClass:(Class)arg6 extraConfigBlock:(CDUnknownBlockType)arg7;
+ (id)dataWithTitle:(id)arg1 imageName:(id)arg2 idStr:(id)arg3 actionBlock:(CDUnknownBlockType)arg4 buttonClass:(Class)arg5 extraConfigBlock:(CDUnknownBlockType)arg6;
+ (id)dataWithTitle:(id)arg1 imageName:(id)arg2 idStr:(id)arg3 actionBlock:(CDUnknownBlockType)arg4 buttonClass:(Class)arg5;
+ (id)dataWithTitle:(id)arg1 imageName:(id)arg2 idStr:(id)arg3 actionBlock:(CDUnknownBlockType)arg4;
+ (id)dataWithTitle:(id)arg1 imageName:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType extraConfigBlock; // @synthesize extraConfigBlock=_extraConfigBlock;
@property(retain, nonatomic) NSString *idStr; // @synthesize idStr=_idStr;
@property(retain, nonatomic) Class buttonClass; // @synthesize buttonClass=_buttonClass;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) NSString *selectedImageName; // @synthesize selectedImageName=_selectedImageName;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 selectedImageName:(id)arg3 idStr:(id)arg4 actionBlock:(CDUnknownBlockType)arg5 buttonClass:(Class)arg6 extraConfigBlock:(CDUnknownBlockType)arg7;

@end

