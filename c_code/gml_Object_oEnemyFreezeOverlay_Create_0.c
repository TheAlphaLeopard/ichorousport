// gml_Object_oEnemyFreezeOverlay_Create_0 @ 0x1409d7420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oEnemyFreezeOverlay_Create_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffd00;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  double local_2d8;
  uint local_2cc;
  double local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined8 local_228;
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  double *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  double *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  longlong *local_110;
  undefined4 local_104;
  longlong *local_100;
  undefined4 local_f4;
  undefined4 local_f0 [3];
  undefined4 local_e4;
  undefined4 local_e0 [3];
  undefined4 local_d4;
  undefined4 local_d0 [3];
  undefined4 local_c4;
  
  local_240 = "gml_Script_anon@46@gml_Object_oEnemyFoulFowl_Other_76";
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_248;
  local_238 = 2;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_228,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_2dc = 0;
  local_2e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_15c = 0;
  local_168 = 0x4041800000000000;
  local_238 = 5;
  uStack_2ac = 0;
  local_2b8 = 0x4076800000000000;
  FUN_1400462a0(&local_2b8,&local_168);
  local_178 = local_2b8;
  uStack_170 = uStack_2b0;
  uStack_16c = uStack_2ac;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  FUN_140041b80(&local_2d8,&local_178);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_238 = 6;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = 0x4018000000000000;
  iVar4 = 6;
  do {
    iVar4 = iVar4 + -1;
    local_238 = 0xb;
    dVar6 = (double)FUN_140e794b0(0,0x4030000000000000);
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2bc = 0;
    local_238 = 0xc;
    local_2c8 = dVar6;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    local_104 = 6;
    in_stack_fffffffffffffd00 = in_stack_fffffffffffffd00 & 0xffffffffffffff00;
    uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
    local_110 = param_1;
    FUN_140e87440(&local_110,DAT_1419fe0e8,0x80000000,&local_258,uVar9,in_stack_fffffffffffffd00);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    local_f4 = 6;
    in_stack_fffffffffffffd00 = in_stack_fffffffffffffd00 & 0xffffffffffffff00;
    local_100 = param_1;
    FUN_140e87440(&local_100,DAT_1419fe158,0x80000000,&local_268,uVar9 & 0xffffffffffffff00,
                  in_stack_fffffffffffffd00);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_14c = 0;
    local_158 = 0x401c000000000000;
    FUN_140042560(&local_158,uVar1);
    local_29c = local_24c;
    local_2a0 = local_250;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_2a8 = local_258;
    }
    else {
      FUN_1400419b0(&local_2a8,&local_258);
    }
    FUN_1400460e0(&local_2a8,&local_158);
    dVar6 = local_2d8;
    if ((local_2cc & 0xffffff) != 0) {
      dVar6 = (double)FUN_140e4b060(&local_2d8);
    }
    dVar7 = local_2c8;
    if ((local_2bc & 0xffffff) != 0) {
      dVar7 = (double)FUN_140e4b060(&local_2c8);
    }
    fVar5 = (float)FUN_140e78f90((float)dVar7,(float)dVar6);
    uStack_1ac = local_29c;
    uStack_1b0 = local_2a0;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_2a8;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_2a8);
    }
    FUN_140162c50(&local_1b8,(double)fVar5);
    local_2f8 = (undefined4)local_1b8;
    uStack_2f4 = local_1b8._4_4_;
    uStack_2f0 = uStack_1b0;
    uStack_2ec = uStack_1ac;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2f8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_28c = local_25c;
    local_290 = local_260;
    local_148 = (double *)&local_228;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
      local_298 = local_268;
    }
    else {
      FUN_1400419b0(&local_298,&local_268);
    }
    local_e4 = 7;
    local_f0[0] = 5;
    FUN_1400460e0(&local_298,local_f0);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f0);
    }
    dVar6 = local_2d8;
    if ((local_2cc & 0xffffff) != 0) {
      dVar6 = (double)FUN_140e4b060(&local_2d8);
    }
    dVar7 = local_2c8;
    if ((local_2bc & 0xffffff) != 0) {
      dVar7 = (double)FUN_140e4b060(&local_2c8);
    }
    fVar5 = (float)FUN_140e79010((float)dVar7,(float)dVar6);
    uStack_19c = local_28c;
    uStack_1a0 = local_290;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_298;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_298);
    }
    FUN_140162c50(&local_1a8,(double)fVar5);
    local_2f8 = (undefined4)local_1a8;
    uStack_2f4 = local_1a8._4_4_;
    uStack_2f0 = uStack_1a0;
    uStack_2ec = uStack_19c;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2f8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_140 = local_218;
    uStack_16c = 0xf;
    local_178 = 0x1000000000000b0;
    local_2f8 = 0xb0;
    uStack_2f4 = 0x1000000;
    uStack_2f0 = uStack_170;
    uStack_2ec = 0xf;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2f8);
    local_138 = local_208;
    local_130 = &local_2d8;
    uVar1 = FUN_140e794b0(0,0x4000000000000000);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1dc = 0;
    local_128 = &local_1e8;
    local_2f8 = _DAT_1419eaa00;
    uStack_2f4 = uRam00000001419eaa04;
    uStack_2f0 = uRam00000001419eaa08;
    uStack_2ec = uRam00000001419eaa0c;
    local_1e8 = uVar1;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2f8);
    local_120 = &local_1d8;
    local_2f8 = _DAT_141dd8a68;
    uStack_2f4 = uRam0000000141dd8a6c;
    uStack_2f0 = uRam0000000141dd8a70;
    uStack_2ec = DAT_141dd8a74;
    if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_2f8);
    local_118 = local_1c8;
    FUN_140265f80(param_1,param_2,&local_2e8,7,&local_148);
    local_238 = 0xe;
    FUN_140162d40(&local_2d8,0x18);
    local_238 = 0xf;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    local_148 = &local_2d8;
    local_27c = 0;
    local_288 = 0x4066800000000000;
    FUN_1400460e0(&local_288,&local_168);
    uStack_18c = local_27c;
    uStack_190 = local_280;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
      local_198 = local_288;
    }
    else {
      FUN_1400419b0(&local_198,&local_288);
    }
    local_d4 = 7;
    local_e0[0] = 1;
    FUN_1400462a0(&local_198,local_e0);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e0);
    }
    local_2f8 = (undefined4)local_198;
    uStack_2f4 = local_198._4_4_;
    uStack_2f0 = uStack_190;
    uStack_2ec = uStack_18c;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2f8);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_140 = local_218;
    local_26c = 0;
    local_278 = 0x4076800000000000;
    FUN_1400462a0(&local_278,&local_168);
    uStack_2ac = local_26c;
    uStack_2b0 = local_270;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) == 0) {
      local_2b8 = local_278;
    }
    else {
      FUN_1400419b0(&local_2b8,&local_278);
    }
    local_c4 = 7;
    local_d0[0] = 1;
    FUN_1400460e0(&local_2b8,local_d0);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    local_2f8 = (undefined4)local_2b8;
    uStack_2f4 = local_2b8._4_4_;
    uStack_2f0 = uStack_2b0;
    uStack_2ec = uStack_2ac;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2f8);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_138 = local_208;
    pcVar8 = (code *)&local_148;
    pdVar2 = (double *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_2e8,3,pcVar8);
    if (pdVar2 != &local_2d8) {
      local_2f8 = *(undefined4 *)pdVar2;
      uStack_2f4 = *(undefined4 *)((longlong)pdVar2 + 4);
      uStack_2f0 = *(undefined4 *)(pdVar2 + 1);
      uStack_2ec = *(undefined4 *)((longlong)pdVar2 + 0xc);
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140041b80(&local_2d8,&local_2f8);
    }
  } while (0 < iVar4);
  local_238 = 0x11;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uVar10 = (undefined4)((ulonglong)pcVar8 >> 0x20);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0xc008000000000000;
  local_238 = 0x12;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  uStack_16c = 0xf;
  local_178 = 0x1000002000000c6;
  local_2f8 = 0xc6;
  uStack_2f4 = 0x1000002;
  uStack_2f0 = uStack_170;
  uStack_2ec = 0xf;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2f8);
  local_2f8 = _DAT_1419eaa10;
  uStack_2f4 = uRam00000001419eaa14;
  uStack_2f0 = uRam00000001419eaa18;
  uStack_2ec = uRam00000001419eaa1c;
  local_148 = (double *)&local_228;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2f8);
  local_140 = local_218;
  local_2f8 = _DAT_1419df7a0;
  uStack_2f4 = uRam00000001419df7a4;
  uStack_2f0 = uRam00000001419df7a8;
  uStack_2ec = uRam00000001419df7ac;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2f8);
  local_138 = local_208;
  local_2f8 = (undefined4)DAT_1419df7b0;
  uStack_2f4 = DAT_1419df7b0._4_4_;
  uStack_2f0 = DAT_1419df7b8;
  uStack_2ec = DAT_1419df7bc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2f8);
  local_130 = (double *)local_1f8;
  local_2f8 = (undefined4)DAT_1419df7b0;
  uStack_2f4 = DAT_1419df7b0._4_4_;
  uStack_2f0 = DAT_1419df7b8;
  uStack_2ec = DAT_1419df7bc;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_2f8);
  local_128 = &local_1e8;
  local_1d8 = FUN_140e794b0(0xcccccccd,0x3ff199999999999a);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_120 = &local_1d8;
  FUN_140e634e0(param_1,param_2,&local_2e8,6,CONCAT44(uVar10,DAT_141a0a2e8),&local_148);
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_228,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_248;
  return param_3;
}

