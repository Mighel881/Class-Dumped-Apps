//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext;

@interface WAMediaFilterRenderer : NSObject
{
    // Error parsing type: , name: queue
    // Error parsing type: , name: context
    // Error parsing type: , name: filterGenerators
    // Error parsing type: , name: allFilterTypes
}

- (void).cxx_destruct;
- (id)fetchAllFilters;
- (id)filterAfterFilter:(id)arg1;
- (id)applyFilter:(id)arg1 toImage:(id)arg2;
- (id)init;
@property(nonatomic, readonly) CIContext *context; // @synthesize context;

@end

