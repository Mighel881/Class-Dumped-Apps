//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBActivityErrorStatus : NSObject
{
    // Error parsing type: , name: modelObjectId
    // Error parsing type: , name: statusType
    // Error parsing type: , name: errors
    // Error parsing type: , name: canContinue
}

- (void).cxx_destruct;
- (id)init;
- (id)contentViewObjectWithModelContext:(id)arg1;
- (id)initWithExportErrors:(id)arg1 canContinue:(_Bool)arg2;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) NSString *modelObjectId;

@end

