//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEModernFeedCellPattern : NSObject
{
    _Bool _isStatic;
    NSString *_controllerClassName;
    NSString *_cellType;
    CDUnknownBlockType _itemPredicateBlock;
}

@property(copy, nonatomic) CDUnknownBlockType itemPredicateBlock; // @synthesize itemPredicateBlock=_itemPredicateBlock;
@property(nonatomic) _Bool isStatic; // @synthesize isStatic=_isStatic;
@property(copy, nonatomic) NSString *cellType; // @synthesize cellType=_cellType;
@property(copy, nonatomic) NSString *controllerClassName; // @synthesize controllerClassName=_controllerClassName;
- (void).cxx_destruct;

@end
