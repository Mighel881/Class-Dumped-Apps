//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AWEPOIDebugCellModel : NSObject
{
    _Bool _toggleOn;
    unsigned long long _type;
    NSString *_title;
    NSString *_desc;
    CDUnknownBlockType _actionBlock;
    id _context;
    NSNumber *_height;
}

@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) _Bool toggleOn; // @synthesize toggleOn=_toggleOn;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

