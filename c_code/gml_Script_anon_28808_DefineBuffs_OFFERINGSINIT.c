// gml_Script_anon_28808_DefineBuffs_OFFERINGSINIT @ 0x1403e8880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_28808_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 **param_2,undefined8 *param_3,int param_4,
          undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong in_stack_fffffffffffffd90;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  uint local_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  byte local_1d4;
  undefined8 local_1d0;
  byte local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_200 = "gml_Script_anon@27646@DefineBuffs@OFFERINGSINIT";
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  local_1f8 = 0x477;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1e0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_21c = 0;
  local_228 = 0;
  local_54 = 0;
  local_60 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1f8 = 0x479;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a58110,0x80000000,&local_70,uVar9,in_stack_fffffffffffffd90);
  cVar1 = FUN_140e491e0(&local_70);
  if (cVar1 != '\0') {
    local_1f8 = 0x479;
    goto LAB_1403e99a4;
  }
  local_1f8 = 0x47c;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  ppuVar11 = (undefined8 **)(in_stack_fffffffffffffd90 & 0xffffffffffffff00);
  plVar10 = (longlong *)(uVar9 & 0xffffffffffffff00);
  FUN_140e87440(uVar4,DAT_1419f6128,0x80000000,&local_80,plVar10,ppuVar11);
  cVar1 = FUN_140e491e0(&local_80);
  puVar7 = &DAT_1419df7b0;
  if (cVar1 == '\0') goto LAB_1403e95a3;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_90,(ulonglong)plVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  uStack_250 = CONCAT44(0xf,(uint)uStack_250);
  local_258 = 0x1000000000000ee;
  plVar10 = param_1;
  ppuVar11 = param_2;
  FUN_140e87170(&local_258,DAT_141a0a828,0x80000000,&local_1b0,param_1,param_2);
  if ((1 << ((byte)(uStack_250 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  iVar2 = FUN_140e851f0(&local_90,&local_1b0,DAT_141955260,0);
  if (iVar2 != 0) goto LAB_1403e95a3;
  local_1f8 = 0x47e;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uStack_250 = CONCAT44(0xf,(uint)uStack_250);
  local_258 = 0x1000000000000ee;
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar9 = (ulonglong)plVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_258,DAT_1419f5e38,0x80000000,&local_a0,uVar9,uVar12);
  if ((1 << ((byte)(uStack_250 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_a0,DAT_1419f5868,0x80000000,&local_1c0,uVar9,uVar12);
  FUN_140e87440(&local_1c0,DAT_1419f5df8,0x80000000,&local_b0,uVar9 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  switch(local_1b4) {
  default:
switchD_1403e8cc2_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_1c0;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_1c0 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403e8cc2_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_1c0);
    uVar4 = FUN_140e87250(uVar3);
  }
  puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_228,0,&local_b0,0);
  if (puVar5 != &local_140) {
    local_238 = *puVar5;
    uStack_230 = puVar5[1];
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_238);
  }
  local_1f8 = 0x47f;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uVar3 = 1;
  puVar5 = (undefined8 *)
           FUN_140e8da20(&local_60,param_1,4,&DAT_141dd2648,&DAT_141dd2958,&DAT_141dd2a08,
                         &DAT_141dd2798);
  if (puVar5 != &local_1e0) {
    local_238 = *puVar5;
    uStack_230 = puVar5[1];
    if ((1 << (local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    FUN_140041b80(&local_1e0,&local_238);
  }
  local_180 = &local_1e0;
  local_178 = &local_140;
  ppuVar11 = &local_180;
  plVar10 = (longlong *)CONCAT44(uVar3,DAT_1419f5d88);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_228,2,plVar10,ppuVar11);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
LAB_1403e95a3:
    local_1f8 = 0x48f;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar9 = (ulonglong)plVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f5e58,0x80000000,&local_190,uVar9,uVar12);
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
    }
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(puVar5,DAT_141a0a7d8,0x80000000,&local_170,uVar9,uVar12);
    uStack_23c = local_164;
    uStack_240 = local_168;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
      local_248 = local_170;
    }
    else {
      FUN_1400419b0(&local_248,&local_170);
    }
    FUN_1400460e0(&local_190,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140e87930(uVar4,DAT_1419f5e58,0x80000000,&local_190);
    local_1f8 = 0x491;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    if (0 < param_4) {
      puVar7 = (undefined8 *)*param_5;
    }
    uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_240 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
      local_248 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_248,puVar7);
    }
    uStack_230._4_4_ = 7;
    local_238 = CONCAT44(local_238._4_4_,0xf);
    FUN_140042560(&local_248,&local_238);
    if ((1 << ((byte)uStack_230._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    uStack_250 = uStack_250 & 0xffffffff;
    local_258 = 0x406f400000000000;
    FUN_1400462a0(&local_258,&local_248);
    local_238 = local_258;
    uStack_230 = uStack_250;
    if ((1 << (local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    FUN_140041b80(&local_1e0,&local_238);
    if ((1 << ((byte)(uStack_250 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_180 = &local_1e0;
    local_238 = CONCAT44(uRam00000001419e47c4,_DAT_1419e47c0);
    uStack_230 = CONCAT44(uRam00000001419e47cc,uRam00000001419e47c8);
    if ((1 << (local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    FUN_140041b80(&local_1d0,&local_238);
    local_178 = &local_1d0;
    puVar7 = (undefined8 *)FUN_140e79090(&local_228,2,&local_180);
    if (puVar7 != &local_1a0) {
      local_238 = *puVar7;
      uStack_230 = puVar7[1];
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      FUN_140041b80(&local_1a0,&local_238);
    }
    local_1f8 = 0x492;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f5e58,0x80000000,&local_e0,uVar9,uVar12);
    uVar6 = FUN_140e851f0(&local_e0,&local_1a0,DAT_141955260,1);
    if (uVar6 < 0x80000000) {
      local_1f8 = 0x494;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      FUN_140e87440(uVar4,DAT_1419f5e58,0x80000000,&local_190,uVar9 & 0xffffffffffffff00,
                    uVar12 & 0xffffffffffffff00);
      FUN_1400462a0(&local_190,&local_1a0);
      FUN_140e87930(uVar4,DAT_1419f5e58,0x80000000,&local_190);
      local_1f8 = 0x495;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      local_238 = 0x3ff0000000000000;
      uVar3 = (undefined4)uStack_230;
      uStack_230 = CONCAT44(0xd,uVar3);
      local_258 = 0x3ff0000000000000;
      uStack_250 = CONCAT44(0xd,uVar3);
      if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f0);
      }
      FUN_140041b80(&local_1f0,&local_258);
      FUN_140e87930(uVar4,DAT_1419f6128,0x80000000,&local_1f0);
    }
    goto LAB_1403e99a4;
  }
  local_1f8 = 0x481;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_230 = CONCAT44(0xd,(undefined4)uStack_230);
  local_238 = 0;
  local_258 = 0;
  uStack_250 = uStack_230;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  FUN_140041b80(&local_1f0,&local_258);
  FUN_140e87930(uVar4,DAT_1419f6128,0x80000000,&local_1f0);
  local_1f8 = 0x482;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  local_238 = 0x3ff0000000000000;
  uVar3 = (undefined4)uStack_230;
  uStack_230 = CONCAT44(0xd,uVar3);
  local_258 = 0x3ff0000000000000;
  uStack_250 = CONCAT44(0xd,uVar3);
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  FUN_140041b80(&local_110,&local_258);
  FUN_140e87930(uVar4,DAT_141a58110,0x80000000,&local_110);
  local_1f8 = 0x483;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar9 = (ulonglong)plVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5f48,0x80000000,&local_c0,uVar9,uVar12);
  uStack_23c = 0;
  local_248 = 0x4014000000000000;
  FUN_1400460e0(&local_248,&local_c0);
  local_238 = local_248;
  uStack_230 = CONCAT44(uStack_23c,uStack_240);
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e87930(uVar4,DAT_1419f5808,0x80000000,&local_120);
  local_1f8 = 0x484;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar4,DAT_1419f5f48,0x80000000,&local_218,uVar9 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  uVar6 = local_20c & 0xffffff;
  if (uVar6 == 0) {
LAB_1403e908d:
    local_218 = local_218 + 1.0;
  }
  else {
    if (uVar6 == 1) {
      local_218 = (double)FUN_140e4b060(&local_218);
      local_20c = 0;
      goto LAB_1403e908d;
    }
    if (uVar6 == 7) {
      local_218 = (double)CONCAT44(local_218._4_4_,local_218._0_4_ + 1);
    }
    else if (uVar6 == 10) {
      local_218 = (double)((longlong)local_218 + 1);
    }
    else {
      if (uVar6 == 0xd) {
        local_20c = 0;
        goto LAB_1403e908d;
      }
      FUN_140042910(&DAT_14172c3d8,&local_218,&local_218);
    }
  }
  FUN_140e87930(uVar4,DAT_1419f5f48,0x80000000,&local_218);
  local_1f8 = 0x485;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_250._4_4_ = 0xf;
  local_258 = 0x1000000000000ee;
  plVar10 = param_1;
  FUN_140e87170(&local_258,DAT_141a0a828,0x80000000,&local_1b0,param_1,param_2);
  if ((1 << ((byte)uStack_250._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_23c = local_1a4;
  uStack_240 = local_1a8;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) == 0) {
    local_248 = local_1b0;
  }
  else {
    FUN_1400419b0(&local_248,&local_1b0);
  }
  uVar3 = uStack_23c;
  local_238 = local_248;
  uStack_230 = CONCAT44(uStack_23c,uStack_240);
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  FUN_140041b80(&local_130,&local_238);
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e87930(uVar4,DAT_1419f6078,0x80000000,&local_130);
  local_1f8 = 0x486;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_250._4_4_ = 0xf;
  local_258 = 0x1000000000000ee;
  uVar12 = (ulonglong)param_2 & 0xffffffffffffff00;
  uVar9 = (ulonglong)plVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_258,DAT_1419f5ba8,0x80000000,&local_d0,uVar9,uVar12);
  if ((1 << ((byte)uStack_250._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_238 = CONCAT44(uRam00000001419e4804,_DAT_1419e4800);
  uStack_230 = CONCAT44(uRam00000001419e480c,uRam00000001419e4808);
  if ((1 << (local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  FUN_140041b80(&local_1e0,&local_238);
  local_180 = &local_1e0;
  uStack_23c = 0;
  local_248 = 0x400c000000000000;
  FUN_140046500(&local_248,&local_d0);
  local_238 = local_248;
  uStack_230 = CONCAT44(uStack_23c,uStack_240);
  if ((1 << (local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  FUN_140041b80(&local_1d0,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_178 = &local_1d0;
  puVar7 = (undefined8 *)FUN_140e79090(&local_228,2,&local_180);
  if (puVar7 != &local_150) {
    local_238 = *puVar7;
    uStack_230 = puVar7[1];
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_238);
  }
  FUN_140e87930(uVar4,DAT_1419f59f8,0x80000000,&local_150);
  local_1f8 = 0x487;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_250._4_4_ = 0xf;
  local_258 = 0x1000000000000ee;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_258,DAT_1419f5ba8,0x80000000,&local_f0,uVar9,uVar12);
  if ((1 << ((byte)uStack_250._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f59f8,0x80000000,&local_160,uVar9,uVar12);
  uStack_23c = local_154;
  uStack_240 = local_158;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
    local_248 = local_160;
  }
  else {
    FUN_1400419b0(&local_248,&local_160);
  }
  FUN_140042560(&local_f0,&local_248);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_250._4_4_ = 0xf;
  local_258 = 0x1000000000000ee;
  FUN_140e87930(&local_258,DAT_1419f5ba8,0x80000000,&local_f0);
  if ((1 << ((byte)uStack_250._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_1f8 = 0x488;
  uStack_250._4_4_ = 0xf;
  local_258 = 0x1000000000000ee;
  FUN_140e87440(&local_258,DAT_141a57330,0x80000000,&local_100,uVar9 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_250._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_250 = (ulonglong)(uint)uStack_250;
  local_258 = 0x3fe0000000000000;
  FUN_140042560(&local_100,&local_258);
  if ((1 << ((byte)(uStack_250 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_250 = CONCAT44(0xf,(uint)uStack_250);
  local_258 = 0x1000000000000ee;
  FUN_140e87930(&local_258,DAT_141a57330,0x80000000,&local_100);
  if ((1 << ((byte)(uStack_250 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_1f8 = 0x489;
LAB_1403e99a4:
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_1e0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return param_3;
}

