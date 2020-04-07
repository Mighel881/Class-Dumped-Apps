//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

@interface HTSLiveGiftCanvasDataSource : NSObject
{
    NSNumber *_pointsCount;
    NSNumber *_totalCost;
    NSMutableArray *_lineStack;
    NSMutableArray *_currentLine;
}

@property(retain, nonatomic) NSMutableArray *currentLine; // @synthesize currentLine=_currentLine;
@property(retain, nonatomic) NSMutableArray *lineStack; // @synthesize lineStack=_lineStack;
@property(retain, nonatomic) NSNumber *totalCost; // @synthesize totalCost=_totalCost;
@property(retain, nonatomic) NSNumber *pointsCount; // @synthesize pointsCount=_pointsCount;
- (void).cxx_destruct;
- (id)allPoints;
- (id)popLine;
- (void)pushLine:(id)arg1;
- (void)reset;
- (id)undo;
- (void)endLine;
- (void)addPoint:(id)arg1;
- (void)startLine;
- (id)init;

@end
