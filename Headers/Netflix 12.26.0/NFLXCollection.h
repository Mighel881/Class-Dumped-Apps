//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray;

@interface NFLXCollection : NSObject <NSCopying, NSMutableCopying>
{
    id _associatedObject;
    NSArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) id associatedObject; // @synthesize associatedObject=_associatedObject;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)isValidIndexPath:(id)arg1;
- (id)initWithSections:(id)arg1;
- (id)initWithSections:(id)arg1 associatedObject:(id)arg2;
- (id)init;

@end

