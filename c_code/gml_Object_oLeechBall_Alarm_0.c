// gml_Object_oLeechBall_Alarm_0 @ 0x140b3d430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oLeechBall_Alarm_0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  double *pdVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  longlong *plVar14;
  longlong *plVar15;
  double dVar16;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  code *pcVar17;
  ulonglong uVar18;
  undefined1 **ppuVar19;
  ulonglong in_stack_fffffffffffffd30;
  ulonglong uVar20;
  undefined1 **ppuVar21;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  longlong *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  longlong *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined8 local_258;
  char *local_250;
  undefined4 local_248;
  double local_240;
  uint local_234;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  longlong *local_1d8;
  undefined4 local_1cc;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  double local_150;
  uint local_144;
  double local_140;
  uint local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  longlong local_d8;
  
  local_res18 = 0;
  local_250 = "gml_Script_anon@163@gml_Object_oLeechBall_Create_0";
  local_258 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_258;
  local_248 = 0xe;
  pcVar17 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_228,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_25c = 0xffffff;
  local_268 = (longlong *)0x0;
  uStack_26c = 0xffffff;
  local_278 = (longlong *)0x0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_134 = 0xffffff;
  local_140 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_234 = 0xffffff;
  local_240 = 0.0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_124 = 0xffffff;
  local_130 = 0;
  local_28c = 0;
  local_298 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_248 = 0x10;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
  uStack_2bc = 6;
  local_2c8 = local_res8;
  in_stack_fffffffffffffd30 = in_stack_fffffffffffffd30 & 0xffffffffffffff00;
  uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_2c8,DAT_1419fe0e8,0x80000000,&local_268,uVar18,in_stack_fffffffffffffd30);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  uStack_2bc = 6;
  local_2c8 = local_res8;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(&local_2c8,DAT_1419fe158,0x80000000,&local_278,uVar18,
                in_stack_fffffffffffffd30 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  uStack_2bc = uStack_25c;
  uStack_2c0 = uStack_260;
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
    local_2c8 = local_268;
  }
  else {
    FUN_1400419b0(&local_2c8,&local_268);
  }
  local_res18 = 1;
  FUN_1400460e0(&local_2c8,puVar4);
  local_2b8 = local_2c8;
  uStack_2b0 = uStack_2c0;
  uStack_2ac = uStack_2bc;
  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_2b8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_198 = local_228;
  local_2b8 = local_278;
  uStack_2b0 = uStack_270;
  uStack_2ac = uStack_26c;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2b8);
  local_190 = local_218;
  uStack_2ac = 0xf;
  local_2b8 = (longlong *)0x100000000000149;
  local_288 = (longlong *)0x100000000000149;
  uStack_280 = uStack_2b0;
  uStack_27c = 0xf;
  if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_288);
  local_188 = local_208;
  ppuVar21 = &local_198;
  ppuVar19 = (undefined1 **)CONCAT44(uVar12,DAT_141a12628);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_298,3,ppuVar19,ppuVar21);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_248 = 0x12;
    puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar12 = (undefined4)*puVar4;
    }
    else {
      uVar12 = FUN_140e4b060(puVar4);
    }
    uVar5 = FUN_140e79500(uVar12);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_19c = 0;
    local_248 = 0x13;
    local_1a8 = uVar5;
    while( true ) {
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_298 = 0;
      local_290 = 0;
      local_28c = 5;
      uStack_1bc = 6;
      local_1c8 = local_res8;
      uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
      uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_268,uVar18,uVar20);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1cc = 6;
      local_1d8 = local_res8;
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_278,uVar18,
                    uVar20 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar18 >> 0x20);
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      uStack_2bc = uStack_25c;
      uStack_2c0 = uStack_260;
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_268;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_268);
      }
      local_res18 = 2;
      FUN_1400460e0(&local_2c8,&local_1a8);
      local_2a8 = (undefined4)local_2c8;
      uStack_2a4 = local_2c8._4_4_;
      uStack_2a0 = uStack_2c0;
      uStack_29c = uStack_2bc;
      if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_2a8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_198 = local_228;
      local_2a8 = (undefined4)local_278;
      uStack_2a4 = local_278._4_4_;
      uStack_2a0 = uStack_270;
      uStack_29c = uStack_26c;
      if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_2a8);
      local_190 = local_218;
      uStack_2ac = 0xf;
      local_2b8 = (longlong *)0x100000000000149;
      local_2a8 = 0x149;
      uStack_2a4 = 0x1000000;
      uStack_2a0 = uStack_2b0;
      uStack_29c = 0xf;
      if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_2a8);
      local_188 = local_208;
      ppuVar21 = &local_198;
      uVar18 = CONCAT44(uVar12,DAT_141a12628);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_298,3,uVar18,ppuVar21);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') break;
      local_248 = 0x15;
      uStack_27c = 6;
      local_288 = local_res8;
      ppuVar21 = (undefined1 **)((ulonglong)ppuVar21 & 0xffffffffffffff00);
      ppuVar19 = (undefined1 **)(uVar18 & 0xffffffffffffff00);
      FUN_140e87440(&local_288,DAT_1419fe0e8,0x80000000,&local_120,ppuVar19,ppuVar21);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_1400460e0(&local_120,&local_1a8);
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_120);
    }
    local_248 = 0x17;
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
    uStack_27c = 0;
    local_288 = (longlong *)&DAT_bff0000000000000;
    FUN_140042560(uVar5,&local_288);
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_248 = 0x18;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3d78);
    uStack_27c = 6;
    local_288 = local_res8;
    ppuVar21 = (undefined1 **)((ulonglong)ppuVar21 & 0xffffffffffffff00);
    FUN_140e87440(&local_288,DAT_141a0f7f8,0x80000000,&local_f8,uVar18 & 0xffffffffffffff00,ppuVar21
                 );
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_2a8 = (undefined4)local_f8;
    uStack_2a4 = local_f8._4_4_;
    uStack_2a0 = uStack_f0;
    uStack_29c = uStack_ec;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2a8);
    local_198 = local_228;
    local_2a8 = _DAT_141dc7210;
    uStack_2a4 = uRam0000000141dc7214;
    uStack_2a0 = uRam0000000141dc7218;
    uStack_29c = uRam0000000141dc721c;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2a8);
    local_190 = local_218;
    uStack_2bc = 0;
    local_2c8 = (longlong *)0x3ff0000000000000;
    local_res18 = 4;
    FUN_140046500(&local_2c8,uVar5);
    local_2a8 = (undefined4)local_2c8;
    uStack_2a4 = local_2c8._4_4_;
    uStack_2a0 = uStack_2c0;
    uStack_29c = uStack_2bc;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2a8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_188 = local_208;
    puVar6 = (undefined8 *)gml_Script_arc(local_res8,local_res10,&local_298,3,&local_198);
    if (puVar6 != &local_170) {
      local_2a8 = *(undefined4 *)puVar6;
      uStack_2a4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2a0 = *(undefined4 *)(puVar6 + 1);
      uStack_29c = *(uint *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170,&local_2a8);
    }
    FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_170);
    local_248 = 0x19;
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdab8);
    FUN_140046040(uVar5);
    local_248 = 0x1b;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    local_2a8 = _DAT_1419ebfd0;
    uStack_2a4 = uRam00000001419ebfd4;
    uStack_2a0 = uRam00000001419ebfd8;
    uStack_29c = uRam00000001419ebfdc;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2a8);
    local_198 = local_228;
    ppuVar19 = &local_198;
    uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_298,1,ppuVar19);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_248 = 0x1d;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uStack_27c = 6;
      local_288 = local_res8;
      uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
      uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
      FUN_140e87440(&local_288,DAT_1419fe0e8,0x80000000,&local_268,uVar18,uVar20);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      uStack_27c = 6;
      local_288 = local_res8;
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_140e87440(&local_288,DAT_1419fe158,0x80000000,&local_278,uVar18,
                    uVar20 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar18 >> 0x20);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      uVar10 = FUN_140e794b0(0,0);
      uStack_2bc = uStack_25c;
      uStack_2c0 = uStack_260;
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_268;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_268);
      }
      local_res18 = 8;
      FUN_140162c50(&local_2c8,uVar10);
      local_2a8 = (undefined4)local_2c8;
      uStack_2a4 = local_2c8._4_4_;
      uStack_2a0 = uStack_2c0;
      uStack_29c = uStack_2bc;
      if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_2a8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_190 = local_218;
      uVar10 = FUN_140e794b0(0,0);
      uStack_2bc = uStack_26c;
      uStack_2c0 = uStack_270;
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_278;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_278);
      }
      local_res18 = 0x10;
      FUN_140162c50(&local_2c8,uVar10);
      local_2a8 = (undefined4)local_2c8;
      uStack_2a4 = local_2c8._4_4_;
      uStack_2a0 = uStack_2c0;
      uStack_29c = uStack_2bc;
      if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_2a8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_188 = local_208;
      local_2a8 = _DAT_141dd9a38;
      uStack_2a4 = uRam0000000141dd9a3c;
      uStack_2a0 = uRam0000000141dd9a40;
      uStack_29c = DAT_141dd9a44;
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_2a8);
      uStack_2ac = 0xf;
      local_2b8 = (longlong *)0x1000000000000c3;
      local_2a8 = 0xc3;
      uStack_2a4 = 0x1000000;
      uStack_2a0 = uStack_2b0;
      uStack_29c = 0xf;
      local_180 = local_1f8;
      if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2a8);
      local_178 = local_1e8;
      ppuVar21 = &local_190;
      ppuVar19 = (undefined1 **)CONCAT44(uVar12,DAT_141a0a7c8);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1b8,4,ppuVar19,ppuVar21);
      iVar2 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar5);
      if (0 < iVar2) {
        do {
          (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
          local_248 = 0x1f;
          uStack_27c = 6;
          local_288 = local_res8;
          uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
          uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
          FUN_140e87440(&local_288,DAT_1419fe0e8,0x80000000,&local_268,uVar18,uVar20);
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_1cc = 6;
          local_1d8 = local_res8;
          uVar20 = uVar20 & 0xffffffffffffff00;
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_278,uVar18,uVar20);
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          uStack_1bc = 6;
          local_1c8 = local_res10;
          uVar20 = uVar20 & 0xffffffffffffff00;
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_140,uVar18,uVar20);
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          uStack_2bc = 6;
          local_2c8 = local_res10;
          uVar20 = uVar20 & 0xffffffffffffff00;
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_2c8,DAT_1419fe158,0x80000000,&local_150,uVar18,uVar20);
          if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          dVar16 = local_150;
          if ((local_144 & 0xffffff) != 0) {
            dVar16 = (double)FUN_140e4b060(&local_150);
          }
          dVar13 = local_140;
          if ((local_134 & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_140);
          }
          plVar14 = local_278;
          if ((uStack_26c & 0xffffff) != 0) {
            plVar14 = (longlong *)FUN_140e4b060(&local_278);
          }
          plVar15 = local_268;
          if ((uStack_25c & 0xffffff) != 0) {
            plVar15 = (longlong *)FUN_140e4b060(&local_268);
          }
          fVar11 = (float)FUN_140e793d0((float)(double)plVar15,(float)(double)plVar14,(float)dVar13,
                                        (float)dVar16);
          if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_240);
          }
          local_234 = 0;
          local_240 = (double)fVar11;
          local_248 = 0x21;
          pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          dVar16 = local_240;
          if ((local_234 & 0xffffff) != 0) {
            dVar16 = (double)FUN_140e4b060(&local_240);
          }
          fVar11 = (float)FUN_140e78f90(0x40400000,(float)dVar16);
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pdVar7);
          }
          *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
          *pdVar7 = (double)fVar11;
          local_248 = 0x22;
          pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
          dVar16 = local_240;
          if ((local_234 & 0xffffff) != 0) {
            dVar16 = (double)FUN_140e4b060(&local_240);
          }
          fVar11 = (float)FUN_140e79010(0x40400000,(float)dVar16);
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pdVar7);
          }
          *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
          *pdVar7 = (double)fVar11;
          local_248 = 0x24;
          puVar8 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f0d0);
          puVar9 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
          FUN_140e609c0(local_res8);
          if (puVar8 != puVar9) {
            local_2a8 = *puVar8;
            uStack_2a4 = puVar8[1];
            uStack_2a0 = puVar8[2];
            uStack_29c = puVar8[3];
            if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar9);
            }
            FUN_140041b80(puVar9,&local_2a8);
          }
          FUN_140e60910(1);
          local_248 = 0x26;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
          uVar5 = FUN_140e79480(0);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          *puVar6 = uVar5;
          local_248 = 0x27;
          uStack_2ac = 6;
          local_2b8 = local_res10;
          ppuVar21 = (undefined1 **)(uVar20 & 0xffffffffffffff00);
          ppuVar19 = (undefined1 **)(uVar18 & 0xffffffffffffff00);
          FUN_140e87440(&local_2b8,DAT_141a0cfc8,0x80000000,&local_108,ppuVar19,ppuVar21);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2a8 = (undefined4)local_108;
          uStack_2a4 = local_108._4_4_;
          uStack_2a0 = uStack_100;
          uStack_29c = uStack_fc;
          if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_160);
          }
          FUN_140041b80(&local_160,&local_2a8);
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_160);
          cVar1 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_e8,&local_res8,&local_res10);
      if (local_d8 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  local_248 = 0x31;
  uStack_2ac = 6;
  local_2b8 = local_res8;
  uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
  uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_120,uVar18,uVar20);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  uStack_2bc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_2c8,puVar4);
  }
  local_res18 = 0x20;
  FUN_140042560(&local_2c8,uVar3);
  FUN_1400460e0(&local_120,&local_2c8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_120);
  local_248 = 0x33;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
  uStack_2ac = 6;
  local_2b8 = local_res8;
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_268,uVar18,uVar20);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  uStack_2ac = 6;
  local_2b8 = local_res8;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_278,uVar18,uVar20 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2a8 = (undefined4)local_268;
  uStack_2a4 = local_268._4_4_;
  uStack_2a0 = uStack_260;
  uStack_29c = uStack_25c;
  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_2a8);
  local_198 = local_228;
  uStack_2bc = uStack_26c;
  uStack_2c0 = uStack_270;
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
    local_2c8 = local_278;
  }
  else {
    FUN_1400419b0(&local_2c8,&local_278);
  }
  local_res18 = 0x40;
  FUN_1400460e0(&local_2c8,puVar4);
  local_2a8 = (undefined4)local_2c8;
  uStack_2a4 = local_2c8._4_4_;
  uStack_2a0 = uStack_2c0;
  uStack_29c = uStack_2bc;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2a8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_190 = local_218;
  uStack_2ac = 0xf;
  local_2b8 = (longlong *)0x100000000000149;
  local_2a8 = 0x149;
  uStack_2a4 = 0x1000000;
  uStack_2a0 = uStack_2b0;
  uStack_29c = 0xf;
  if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2a8);
  local_188 = local_208;
  ppuVar21 = &local_198;
  ppuVar19 = (undefined1 **)CONCAT44(uVar12,DAT_141a12628);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_298,3,ppuVar19,ppuVar21);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_248 = 0x35;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
    puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar12 = (undefined4)*puVar4;
    }
    else {
      uVar12 = FUN_140e4b060(puVar4);
    }
    uVar5 = FUN_140e79500(uVar12);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_19c = 0;
    local_248 = 0x36;
    local_1a8 = uVar5;
    while( true ) {
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_298 = 0;
      local_290 = 0;
      local_28c = 5;
      uStack_2ac = 6;
      local_2b8 = local_res8;
      uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
      uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
      FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_268,uVar18,uVar20);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      uStack_27c = 6;
      local_288 = local_res8;
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_140e87440(&local_288,DAT_1419fe158,0x80000000,&local_278,uVar18,
                    uVar20 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar18 >> 0x20);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_2a8 = (undefined4)local_268;
      uStack_2a4 = local_268._4_4_;
      uStack_2a0 = uStack_260;
      uStack_29c = uStack_25c;
      if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_2a8);
      local_198 = local_228;
      uStack_2bc = uStack_26c;
      uStack_2c0 = uStack_270;
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_278;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_278);
      }
      local_res18 = 0x80;
      FUN_1400460e0(&local_2c8,&local_1a8);
      local_2a8 = (undefined4)local_2c8;
      uStack_2a4 = local_2c8._4_4_;
      uStack_2a0 = uStack_2c0;
      uStack_29c = uStack_2bc;
      if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_2a8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_190 = local_218;
      uStack_1bc = 0xf;
      local_1c8 = (longlong *)0x100000000000149;
      local_2a8 = 0x149;
      uStack_2a4 = 0x1000000;
      uStack_2a0 = uStack_1c0;
      uStack_29c = 0xf;
      if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_2a8);
      local_188 = local_208;
      ppuVar21 = &local_198;
      uVar18 = CONCAT44(uVar12,DAT_141a12628);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_298,3,uVar18,ppuVar21);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') break;
      local_248 = 0x38;
      local_1cc = 6;
      local_1d8 = local_res8;
      ppuVar21 = (undefined1 **)((ulonglong)ppuVar21 & 0xffffffffffffff00);
      ppuVar19 = (undefined1 **)(uVar18 & 0xffffffffffffff00);
      FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_130,ppuVar19,ppuVar21);
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_1400460e0(&local_130,&local_1a8);
      FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_130);
    }
    local_248 = 0x3a;
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
    uStack_2ac = 0;
    local_2b8 = (longlong *)&DAT_bff0000000000000;
    FUN_140042560(uVar5,&local_2b8);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_248 = 0x3c;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3d78);
    uStack_2ac = 6;
    local_2b8 = local_res8;
    ppuVar21 = (undefined1 **)((ulonglong)ppuVar21 & 0xffffffffffffff00);
    FUN_140e87440(&local_2b8,DAT_141a0f7f8,0x80000000,&local_f8,uVar18 & 0xffffffffffffff00,ppuVar21
                 );
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2a8 = (undefined4)local_f8;
    uStack_2a4 = local_f8._4_4_;
    uStack_2a0 = uStack_f0;
    uStack_29c = uStack_ec;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2a8);
    local_198 = local_228;
    local_2a8 = _DAT_141dc7210;
    uStack_2a4 = uRam0000000141dc7214;
    uStack_2a0 = uRam0000000141dc7218;
    uStack_29c = uRam0000000141dc721c;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2a8);
    local_190 = local_218;
    uStack_2bc = 0;
    local_2c8 = (longlong *)0x3ff0000000000000;
    local_res18 = 0x100;
    FUN_140046500(&local_2c8,uVar5);
    local_2a8 = (undefined4)local_2c8;
    uStack_2a4 = local_2c8._4_4_;
    uStack_2a0 = uStack_2c0;
    uStack_29c = uStack_2bc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2a8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_188 = local_208;
    puVar6 = (undefined8 *)gml_Script_arc(local_res8,local_res10,&local_298,3,&local_198);
    if (puVar6 != &local_170) {
      local_2a8 = *(undefined4 *)puVar6;
      uStack_2a4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2a0 = *(undefined4 *)(puVar6 + 1);
      uStack_29c = *(uint *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170,&local_2a8);
    }
    FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_170);
    local_248 = 0x3d;
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdab8);
    FUN_140046040(uVar5);
    local_248 = 0x3f;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    local_2a8 = _DAT_1419ebfd0;
    uStack_2a4 = uRam00000001419ebfd4;
    uStack_2a0 = uRam00000001419ebfd8;
    uStack_29c = uRam00000001419ebfdc;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2a8);
    local_198 = local_228;
    ppuVar19 = &local_198;
    uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_298,1,ppuVar19);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_248 = 0x41;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uStack_2ac = 6;
      local_2b8 = local_res8;
      uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
      uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
      FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_268,uVar18,uVar20);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      uStack_2ac = 6;
      local_2b8 = local_res8;
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_278,uVar18,
                    uVar20 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar18 >> 0x20);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      uVar10 = FUN_140e794b0(0,0);
      uStack_2bc = uStack_25c;
      uStack_2c0 = uStack_260;
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_268;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_268);
      }
      local_res18 = 0x200;
      FUN_140162c50(&local_2c8,uVar10);
      local_2a8 = (undefined4)local_2c8;
      uStack_2a4 = local_2c8._4_4_;
      uStack_2a0 = uStack_2c0;
      uStack_29c = uStack_2bc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_2a8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_190 = local_218;
      uVar10 = FUN_140e794b0(0,0);
      uStack_2bc = uStack_26c;
      uStack_2c0 = uStack_270;
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_278;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_278);
      }
      local_res18 = 0x400;
      FUN_140162c50(&local_2c8,uVar10);
      local_2a8 = (undefined4)local_2c8;
      uStack_2a4 = local_2c8._4_4_;
      uStack_2a0 = uStack_2c0;
      uStack_29c = uStack_2bc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_2a8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_188 = local_208;
      local_2a8 = _DAT_141dd9a38;
      uStack_2a4 = uRam0000000141dd9a3c;
      uStack_2a0 = uRam0000000141dd9a40;
      uStack_29c = DAT_141dd9a44;
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_2a8);
      uStack_2ac = 0xf;
      local_2b8 = (longlong *)0x1000000000000c3;
      local_2a8 = 0xc3;
      uStack_2a4 = 0x1000000;
      uStack_2a0 = uStack_2b0;
      uStack_29c = 0xf;
      local_180 = local_1f8;
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2a8);
      local_178 = local_1e8;
      ppuVar21 = &local_190;
      ppuVar19 = (undefined1 **)CONCAT44(uVar12,DAT_141a0a7c8);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1b8,4,ppuVar19,ppuVar21);
      iVar2 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar5);
      if (0 < iVar2) {
        do {
          (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
          local_248 = 0x43;
          uStack_2ac = 6;
          local_2b8 = local_res8;
          uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
          uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
          FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_268,uVar18,uVar20);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          uStack_27c = 6;
          local_288 = local_res8;
          uVar20 = uVar20 & 0xffffffffffffff00;
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_288,DAT_1419fe158,0x80000000,&local_278,uVar18,uVar20);
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_1cc = 6;
          local_1d8 = local_res10;
          uVar20 = uVar20 & 0xffffffffffffff00;
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_140,uVar18,uVar20);
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          uStack_1bc = 6;
          local_1c8 = local_res10;
          uVar20 = uVar20 & 0xffffffffffffff00;
          uVar18 = uVar18 & 0xffffffffffffff00;
          FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_150,uVar18,uVar20);
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          dVar16 = local_150;
          if ((local_144 & 0xffffff) != 0) {
            dVar16 = (double)FUN_140e4b060(&local_150);
          }
          dVar13 = local_140;
          if ((local_134 & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_140);
          }
          plVar14 = local_278;
          if ((uStack_26c & 0xffffff) != 0) {
            plVar14 = (longlong *)FUN_140e4b060(&local_278);
          }
          plVar15 = local_268;
          if ((uStack_25c & 0xffffff) != 0) {
            plVar15 = (longlong *)FUN_140e4b060(&local_268);
          }
          fVar11 = (float)FUN_140e793d0((float)(double)plVar15,(float)(double)plVar14,(float)dVar13,
                                        (float)dVar16);
          if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_240);
          }
          local_234 = 0;
          local_240 = (double)fVar11;
          local_248 = 0x45;
          pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          dVar16 = local_240;
          if ((local_234 & 0xffffff) != 0) {
            dVar16 = (double)FUN_140e4b060(&local_240);
          }
          fVar11 = (float)FUN_140e78f90(0x40400000,(float)dVar16);
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pdVar7);
          }
          *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
          *pdVar7 = (double)fVar11;
          local_248 = 0x46;
          pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
          dVar16 = local_240;
          if ((local_234 & 0xffffff) != 0) {
            dVar16 = (double)FUN_140e4b060(&local_240);
          }
          fVar11 = (float)FUN_140e79010(0x40400000,(float)dVar16);
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pdVar7);
          }
          *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
          *pdVar7 = (double)fVar11;
          local_248 = 0x47;
          puVar8 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f0d0);
          puVar9 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
          FUN_140e609c0(local_res8);
          if (puVar8 != puVar9) {
            local_2a8 = *puVar8;
            uStack_2a4 = puVar8[1];
            uStack_2a0 = puVar8[2];
            uStack_29c = puVar8[3];
            if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar9);
            }
            FUN_140041b80(puVar9,&local_2a8);
          }
          FUN_140e60910(1);
          local_248 = 0x48;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
          uVar5 = FUN_140e79480(0);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          *puVar6 = uVar5;
          local_248 = 0x49;
          uStack_2bc = 6;
          local_2c8 = local_res10;
          ppuVar21 = (undefined1 **)(uVar20 & 0xffffffffffffff00);
          ppuVar19 = (undefined1 **)(uVar18 & 0xffffffffffffff00);
          FUN_140e87440(&local_2c8,DAT_141a0cfc8,0x80000000,&local_108,ppuVar19,ppuVar21);
          if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2a8 = (undefined4)local_108;
          uStack_2a4 = local_108._4_4_;
          uStack_2a0 = uStack_100;
          uStack_29c = uStack_fc;
          if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_160);
          }
          FUN_140041b80(&local_160,&local_2a8);
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_160);
          cVar1 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_e8,&local_res8,&local_res10);
      if (local_d8 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  local_248 = 0x51;
  uStack_2ac = 6;
  local_2b8 = local_res8;
  FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_130,
                (ulonglong)ppuVar19 & 0xffffffffffffff00,(ulonglong)ppuVar21 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  uStack_2bc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_2c8,puVar4);
  }
  local_res18 = 0x800;
  FUN_140042560(&local_2c8,uVar3);
  FUN_1400460e0(&local_130,&local_2c8);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_130);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  _eh_vector_destructor_iterator_(local_228,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_258;
  return param_3;
}

