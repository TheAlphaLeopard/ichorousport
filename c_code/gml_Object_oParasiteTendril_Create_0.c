// gml_Object_oParasiteTendril_Create_0 @ 0x140b98b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oParasiteTendril_Create_0(longlong *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  byte bVar14;
  float fVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  code *pcVar19;
  undefined4 uVar24;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined4 **in_stack_fffffffffffffd90;
  undefined4 **ppuVar25;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228 [3];
  byte local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined8 local_208;
  byte local_1fc;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined4 *local_1d0;
  double *local_1c8;
  double *local_1c0;
  double *local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  uint local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  uint local_13c;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_1e0 = "gml_Object_oOfferingPullEffect_Step_0";
  local_1d8 = 0;
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  pcVar19 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_228,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0;
  bVar14 = 0xff;
  local_98._12_4_ = 0xffffff;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_98._8_8_;
  local_98 = auVar1 << 0x40;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_1d8 = 1;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
  local_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_a0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_a8,puVar5);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2a40) &&
     (_Init_thread_header(&DAT_141de2a40), DAT_141de2a40 == -1)) {
    _DAT_141de2a54 = 0;
    _DAT_141de2a48 = 0;
    _DAT_141de2a68 = 0;
    _DAT_141de2a5c = 0x3ff0000000000000;
    _DAT_141de2a6c = 1;
    atexit((_func_5014 *)&LAB_141494a70);
    _Init_thread_footer(&DAT_141de2a40);
  }
  uVar13 = 0;
  do {
    iVar4 = FUN_140e851f0(&DAT_141de2a48 + (longlong)(int)uVar13 * 0x14,&local_a8,(int)DAT_141955260
                          ,0);
    if (iVar4 == 0) {
      if (*(int *)(&DAT_141de2a58 + (longlong)(int)uVar13 * 0x14) == 0) {
        local_1d8 = 4;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f55c8);
        uVar24 = (undefined4)((ulonglong)pcVar19 >> 0x20);
        uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a978);
        uStack_22c = 0;
        local_238 = 0x3ff0000000000000;
        FUN_140046500(&local_238,uVar6);
        FUN_1400460e0(uVar8,&local_238);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_1d8 = 6;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a978);
        uStack_22c = 0;
        local_238 = 0x3ff0000000000000;
        FUN_1400462a0(&local_238,uVar6);
        local_268._8_4_ = uStack_230;
        local_268._0_8_ = local_238;
        local_268._12_4_ = uStack_22c;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,local_268);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_1d0 = local_228;
        uVar23 = CONCAT44(uVar24,DAT_1419f4e48);
        uVar8 = FUN_140e634e0(param_1,param_2,&local_258,1,uVar23,&local_1d0);
        uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
        uStack_22c = 0;
        local_238 = 0x3ff0000000000000;
        FUN_1400462a0(&local_238,uVar8);
        local_268._8_4_ = uStack_230;
        local_268._0_8_ = local_238;
        local_268._12_4_ = uStack_22c;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,local_268);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_1d8 = 8;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        pauVar9 = (undefined1 (*) [16])(**(code **)(*param_1 + 8))(param_1,DAT_1419f55e8);
        pauVar7 = (undefined1 (*) [16])(**(code **)(*param_1 + 8))(param_1,DAT_1419fd1b8);
        if (pauVar9 != (undefined1 (*) [16])local_228) {
          local_268 = *pauVar9;
          if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,local_268);
        }
        local_1d0 = local_228;
        if (pauVar7 != (undefined1 (*) [16])&local_218) {
          local_268 = *pauVar7;
          if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          FUN_140041b80(&local_218,local_268);
        }
        local_1c8 = (double *)&local_218;
        local_1c0 = (double *)&local_e8;
        uVar8 = CONCAT44(uVar24,DAT_141a00c58);
        pauVar9 = (undefined1 (*) [16])FUN_140e634e0(param_1,param_2,&local_258,3,uVar8,&local_1d0);
        uVar24 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (pauVar9 != (undefined1 (*) [16])&local_188) {
          local_268 = *pauVar9;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,local_268);
        }
        FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_188);
        local_1d8 = 9;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        pauVar9 = (undefined1 (*) [16])(**(code **)(*param_1 + 8))(param_1,DAT_1419f5618);
        pauVar7 = (undefined1 (*) [16])(**(code **)(*param_1 + 8))(param_1,DAT_1419fd178);
        if (pauVar9 != (undefined1 (*) [16])local_228) {
          local_268 = *pauVar9;
          if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,local_268);
        }
        local_1d0 = local_228;
        if (pauVar7 != (undefined1 (*) [16])&local_218) {
          local_268 = *pauVar7;
          if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          FUN_140041b80(&local_218,local_268);
        }
        local_1c8 = (double *)&local_218;
        local_1c0 = (double *)&local_e8;
        in_stack_fffffffffffffd90 = &local_1d0;
        pcVar19 = (code *)CONCAT44(uVar24,DAT_141a00c58);
        pauVar9 = (undefined1 (*) [16])
                  FUN_140e634e0(param_1,param_2,&local_258,3,pcVar19,in_stack_fffffffffffffd90);
        if (pauVar9 != (undefined1 (*) [16])&local_198) {
          local_268 = *pauVar9;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50((undefined1 (*) [16])&local_198);
          }
          FUN_140041b80((undefined1 (*) [16])&local_198,local_268);
        }
        FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,(undefined1 (*) [16])&local_198);
        local_1d8 = 0xb;
        local_268._12_4_ = 0;
        local_268._0_8_ = 0x3ff0000000000000;
        uVar13 = FUN_140e851f0(uVar6,local_268,(int)DAT_141955260,1);
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        if (uVar13 < 0x80000000) {
          local_1d8 = 0xb;
          (**(code **)(*param_1 + 8))(param_1,DAT_141a0a978);
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3ff0000000000000;
        }
      }
      else if (*(int *)(&DAT_141de2a58 + (longlong)(int)uVar13 * 0x14) == 1) {
        local_1d8 = 0xf;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        auVar2 = (undefined1  [12])local_268._0_12_;
        uVar24 = (undefined4)((ulonglong)pcVar19 >> 0x20);
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        local_268._12_4_ = 0xf;
        local_268._0_8_ = 0x1000000000000ee;
        auVar1 = local_268;
        local_268._8_4_ = auVar2._8_4_;
        local_238 = 0x1000000000000ee;
        uStack_230 = local_268._8_4_;
        uStack_22c = 0xf;
        local_268 = auVar1;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_238);
        local_1d0 = local_228;
        uVar6 = FUN_140e634e0(param_1,param_2,&local_258,1,CONCAT44(uVar24,DAT_141a02ef8),&local_1d0
                             );
        cVar3 = FUN_140e491e0(uVar6);
        if (cVar3 == '\0') {
          local_1d8 = 0xf;
          FUN_140edd0e0(param_1,param_2,0,0);
          goto LAB_140b9a5f5;
        }
        local_1d8 = 0x11;
        local_268._12_4_ = 0xf;
        local_268._0_8_ = 0x1000000000000ee;
        FUN_140e87170(local_268,DAT_1419fe0e8,0x80000000,&local_68,param_1,param_2);
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        local_268._8_4_ = uStack_60;
        local_268._0_8_ = local_68;
        local_268._12_4_ = uStack_5c;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,local_268);
        local_1d8 = 0x12;
        local_268._12_4_ = 0xf;
        local_268._0_8_ = 0x1000000000000ee;
        plVar20 = param_1;
        uVar22 = param_2;
        FUN_140e87170(local_268,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        uStack_23c = local_fc;
        uStack_240 = local_100;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
          _local_248 = local_108;
        }
        else {
          FUN_1400419b0(&local_248,&local_108);
        }
        local_268._12_4_ = 7;
        local_268._0_4_ = 0x18;
        FUN_1400462a0(&local_248,local_268);
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        local_268._8_4_ = uStack_240;
        local_268._0_8_ = _local_248;
        local_268._12_4_ = uStack_23c;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,local_268);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_1d8 = 0x14;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        pauVar9 = (undefined1 (*) [16])(**(code **)(*param_1 + 8))(param_1,DAT_1419f5648);
        local_268._12_4_ = 6;
        local_268._0_8_ = param_1;
        uVar21 = (ulonglong)plVar20 & 0xffffffffffffff00;
        FUN_140e87440(local_268,DAT_1419fe0e8,0x80000000,&local_158,uVar21,
                      uVar22 & 0xffffffffffffff00);
        uVar24 = (undefined4)(uVar21 >> 0x20);
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        local_268._8_4_ = uStack_150;
        local_268._0_8_ = local_158;
        local_268._12_4_ = uStack_14c;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,local_268);
        local_1d0 = local_228;
        local_1c8 = (double *)&local_f8;
        if (pauVar9 != (undefined1 (*) [16])&local_208) {
          local_268 = *pauVar9;
          if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140041b80(&local_208,local_268);
        }
        local_1c0 = (double *)&local_208;
        ppuVar25 = &local_1d0;
        uVar22 = CONCAT44(uVar24,DAT_141a00c58);
        pauVar7 = (undefined1 (*) [16])FUN_140e634e0(param_1,param_2,&local_258,3,uVar22,ppuVar25);
        if (pauVar7 != (undefined1 (*) [16])&local_188) {
          local_268 = *pauVar7;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,local_268);
        }
        FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_188);
        local_1d8 = 0x15;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        local_268._12_4_ = 6;
        local_268._0_8_ = param_1;
        uVar22 = uVar22 & 0xffffffffffffff00;
        FUN_140e87440(local_268,DAT_1419fe158,0x80000000,&local_168,uVar22,
                      (ulonglong)ppuVar25 & 0xffffffffffffff00);
        uVar24 = (undefined4)(uVar22 >> 0x20);
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        local_268._8_4_ = uStack_160;
        local_268._0_8_ = local_168;
        local_268._12_4_ = uStack_15c;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,local_268);
        local_1d0 = local_228;
        local_1c8 = &local_118;
        if (pauVar9 != (undefined1 (*) [16])&local_208) {
          local_268 = *pauVar9;
          if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140041b80(&local_208,local_268);
        }
        local_1c0 = (double *)&local_208;
        ppuVar25 = &local_1d0;
        uVar22 = CONCAT44(uVar24,DAT_141a00c58);
        pauVar9 = (undefined1 (*) [16])FUN_140e634e0(param_1,param_2,&local_258,3,uVar22,ppuVar25);
        if (pauVar9 != (undefined1 (*) [16])&local_198) {
          local_268 = *pauVar9;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50((undefined1 (*) [16])&local_198);
          }
          FUN_140041b80((undefined1 (*) [16])&local_198,local_268);
        }
        FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,(undefined1 (*) [16])&local_198);
        local_1d8 = 0x17;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f55d8);
        local_268._12_4_ = 6;
        local_268._0_8_ = param_1;
        uVar21 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
        uVar22 = uVar22 & 0xffffffffffffff00;
        FUN_140e87440(local_268,DAT_1419fe0e8,0x80000000,&local_158,uVar22,uVar21);
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        local_268._12_4_ = 6;
        uVar22 = uVar22 & 0xffffffffffffff00;
        FUN_140e87440(local_268,DAT_1419fe158,0x80000000,&local_168,uVar22,
                      uVar21 & 0xffffffffffffff00);
        uVar24 = (undefined4)(uVar22 >> 0x20);
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        local_268._8_4_ = uStack_150;
        local_268._0_8_ = local_158;
        local_268._12_4_ = uStack_14c;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,local_268);
        local_1d0 = local_228;
        local_268._8_4_ = uStack_160;
        local_268._0_8_ = local_168;
        local_268._12_4_ = uStack_15c;
        if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,local_268);
        local_1c8 = (double *)&local_218;
        local_1c0 = (double *)&local_f8;
        local_1b8 = &local_118;
        in_stack_fffffffffffffd90 = &local_1d0;
        pcVar19 = (code *)CONCAT44(uVar24,DAT_1419fd548);
        uVar8 = FUN_140e634e0(param_1,param_2,&local_258,4,pcVar19,in_stack_fffffffffffffd90);
        iVar4 = FUN_140e851f0(uVar8,uVar6,(int)DAT_141955260,1);
        if (iVar4 != -2 && iVar4 < 1) {
          local_1d8 = 0x18;
          (**(code **)(*param_1 + 8))(param_1,DAT_1419f5648);
          FUN_140edd0e0(param_1,param_2,0,0);
        }
      }
      break;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 2);
  local_1d8 = 0x1c;
  local_268._12_4_ = 6;
  local_268._0_8_ = param_1;
  uVar21 = (ulonglong)in_stack_fffffffffffffd90 & 0xffffffffffffff00;
  uVar22 = (ulonglong)pcVar19 & 0xffffffffffffff00;
  FUN_140e87440(local_268,DAT_1419fe0e8,0x80000000,&local_158,uVar22,uVar21);
  if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  local_268._12_4_ = 6;
  uVar21 = uVar21 & 0xffffffffffffff00;
  uVar22 = uVar22 & 0xffffffffffffff00;
  FUN_140e87440(local_268,DAT_1419fded8,0x80000000,&local_78,uVar22,uVar21);
  if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  uStack_23c = uStack_14c;
  uStack_240 = uStack_150;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    _local_248 = local_158;
  }
  else {
    FUN_1400419b0(&local_248,&local_158);
  }
  FUN_1400462a0(&local_248,&local_78);
  local_268._8_4_ = uStack_240;
  local_268._0_8_ = _local_248;
  local_268._12_4_ = uStack_23c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,local_268);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1d8 = 0x1d;
  local_268._12_4_ = 6;
  local_268._0_8_ = param_1;
  uVar21 = uVar21 & 0xffffffffffffff00;
  uVar22 = uVar22 & 0xffffffffffffff00;
  FUN_140e87440(local_268,DAT_1419fe158,0x80000000,&local_168,uVar22,uVar21);
  if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  local_268._12_4_ = 6;
  uVar22 = uVar22 & 0xffffffffffffff00;
  FUN_140e87440(local_268,DAT_1419fdd18,0x80000000,&local_88,uVar22,uVar21 & 0xffffffffffffff00);
  uVar24 = (undefined4)(uVar22 >> 0x20);
  if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  uStack_23c = uStack_15c;
  uStack_240 = uStack_160;
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    _local_248 = local_168;
  }
  else {
    FUN_1400419b0(&local_248,&local_168);
  }
  FUN_1400462a0(&local_248,&local_88);
  local_268._8_4_ = uStack_240;
  local_268._0_8_ = _local_248;
  local_268._12_4_ = uStack_23c;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,local_268);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1d8 = 0x1f;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  local_268._4_4_ = uRam0000000141dc7334;
  local_268._0_4_ = _DAT_141dc7330;
  local_268._8_4_ = uRam0000000141dc7338;
  local_268._12_4_ = uRam0000000141dc733c;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,local_268);
  local_1d0 = local_228;
  local_268._4_4_ = uRam0000000141dc7334;
  local_268._0_4_ = _DAT_141dc7330;
  local_268._8_4_ = uRam0000000141dc7338;
  local_268._12_4_ = uRam0000000141dc733c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,local_268);
  local_1c8 = (double *)&local_218;
  local_1c0 = &local_138;
  local_1b8 = &local_148;
  uVar6 = CONCAT44(uVar24,DAT_1419fd548);
  pauVar9 = (undefined1 (*) [16])FUN_140e634e0(param_1,param_2,&local_258,4,uVar6,&local_1d0);
  uVar24 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pauVar9 != (undefined1 (*) [16])&local_178) {
    local_268 = *pauVar9;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,local_268);
  }
  local_1d8 = 0x21;
  local_268._12_4_ = 0;
  local_268._8_4_ = local_268._8_4_;
  local_268._0_8_ = 0x3f50624dd2f1a9fc;
  iVar4 = FUN_140e851f0(&local_178,local_268,(int)DAT_141955260,1);
  if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  bVar14 = 0xff;
  if (0 < iVar4) {
    local_1d8 = 0x23;
    dVar17 = local_148;
    if ((local_13c & 0xffffff) != 0) {
      dVar17 = (double)FUN_140e4b060(&local_148);
    }
    dVar18 = local_138;
    if ((local_12c & 0xffffff) != 0) {
      dVar18 = (double)FUN_140e4b060(&local_138);
    }
    fVar15 = (float)FUN_140e793d0(0,0,(float)dVar18,(float)dVar17);
    bVar14 = 0;
    local_1d8 = 0x24;
    local_98._0_8_ = (double)fVar15;
    local_98._12_4_ = 0;
    local_268._8_4_ = local_98._8_4_;
    local_268._0_8_ = (double)fVar15;
    local_268._12_4_ = 0;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,local_268);
    FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_b8);
  }
  local_1d8 = 0x27;
  uStack_23c = local_16c;
  uStack_240 = local_170;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    _local_248 = local_178;
  }
  else {
    FUN_1400419b0(&local_248,&local_178);
  }
  local_268._12_4_ = 0;
  local_268._8_4_ = local_268._8_4_;
  local_268._0_8_ = 0x4018000000000000;
  FUN_140046500(&local_248,local_268);
  if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  if ((uStack_23c & 0xffffff) == 0) {
    uVar16 = (undefined4)_local_248;
  }
  else {
    uVar16 = FUN_140e4b060(&local_248);
  }
  uVar6 = FUN_140e78ec0(uVar16,0,0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = uVar6;
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1d8 = 0x29;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f55f8);
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5628);
  uStack_22c = *(undefined4 *)((longlong)puVar10 + 0xc);
  uStack_230 = *(undefined4 *)(puVar10 + 1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_238 = *puVar10;
  }
  else {
    FUN_1400419b0(&local_238,puVar10);
  }
  FUN_140042560(&local_238,&local_128);
  local_268._12_4_ = 0;
  local_268._0_8_ = 0x3ff0000000000000;
  FUN_1400460e0(local_268,&local_238);
  uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_240 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    _local_248 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_248,puVar5);
  }
  FUN_140042560(&local_248,local_268);
  local_1a8 = local_248;
  uStack_1a4 = uStack_244;
  uStack_1a0 = uStack_240;
  uStack_19c = uStack_23c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_1a8);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_1d8 = 0x2a;
  uStack_23c = *(undefined4 *)((longlong)puVar10 + 0xc);
  uStack_240 = *(undefined4 *)(puVar10 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    _local_248 = *puVar10;
  }
  else {
    FUN_1400419b0(&local_248,puVar10);
  }
  FUN_140042560(&local_248,&local_128);
  local_268._12_4_ = 0;
  local_268._0_8_ = 0x3ff0000000000000;
  FUN_1400462a0(local_268,&local_248);
  uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_230 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_238 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_238,puVar5);
  }
  FUN_140042560(&local_238,local_268);
  local_1a8 = (undefined4)local_238;
  uStack_1a4 = local_238._4_4_;
  uStack_1a0 = uStack_230;
  uStack_19c = uStack_22c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1a8);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1d8 = 0x2c;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  puVar11 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5638);
  puVar12 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if (puVar11 != local_228) {
    local_1a8 = *puVar11;
    uStack_1a4 = puVar11[1];
    uStack_1a0 = puVar11[2];
    uStack_19c = puVar11[3];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_1a8);
  }
  local_1d0 = local_228;
  local_1c8 = (double *)&local_c8;
  if (puVar5 != &local_208) {
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_1a8);
  }
  local_1c0 = (double *)&local_208;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar24,DAT_141a00c58);
  puVar11 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_258,3,uVar6,&local_1d0);
  uVar24 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar11 != puVar12) {
    local_1a8 = *puVar11;
    uStack_1a4 = puVar11[1];
    uStack_1a0 = puVar11[2];
    uStack_19c = puVar11[3];
    if ((1 << ((byte)puVar12[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar12);
    }
    FUN_140041b80(puVar12,&local_1a8);
  }
  FUN_140e60910(1);
  local_1d8 = 0x2d;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  puVar11 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar12 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if (puVar11 != local_228) {
    local_1a8 = *puVar11;
    uStack_1a4 = puVar11[1];
    uStack_1a0 = puVar11[2];
    uStack_19c = puVar11[3];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_1a8);
  }
  local_1d0 = local_228;
  local_1c8 = (double *)&local_d8;
  if (puVar5 != &local_208) {
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_1a8);
  }
  local_1c0 = (double *)&local_208;
  FUN_140e609c0(param_1);
  puVar11 = (undefined4 *)
            FUN_140e634e0(param_1,param_2,&local_258,3,CONCAT44(uVar24,DAT_141a00c58),&local_1d0);
  if (puVar11 != puVar12) {
    local_1a8 = *puVar11;
    uStack_1a4 = puVar11[1];
    uStack_1a0 = puVar11[2];
    uStack_19c = puVar11[3];
    if ((1 << ((byte)puVar12[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar12);
    }
    FUN_140041b80(puVar12,&local_1a8);
  }
  FUN_140e60910(1);
LAB_140b9a5f5:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << (bVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50((undefined1 (*) [16])&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_228,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return;
}

