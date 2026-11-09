// gml_Script_anon_9627____struct___401_gml_Object_oBossThePest_Create_0 @ 0x1408193f0

undefined8 *
gml_Script_anon_9627____struct___401_gml_Object_oBossThePest_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  bool bVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_154;
  longlong *local_150;
  undefined4 local_148;
  uint local_144;
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
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_170 = "gml_Script_anon@8457@___struct___401@gml_Object_oBossThePest_Create_0";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x1f2;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_144 = 0xffffff;
  local_150 = (longlong *)0x0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_18c = 0;
  local_198 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 499;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar3 != &local_98) {
    local_1c8 = (longlong *)*puVar3;
    uStack_1c0 = *(undefined4 *)(puVar3 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_1c8);
  }
  local_58 = &local_98;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar8,DAT_141a02ef8),&local_58);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_168 = 499;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar5 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_188,0,0);
    if (puVar5 != puVar3) {
      local_1c8 = (longlong *)*puVar5;
      uStack_1c0 = *(undefined4 *)(puVar5 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_1c8);
    }
    FUN_140e60910(1);
  }
  local_168 = 500;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09ba8);
  cVar2 = FUN_140e491e0(uVar4);
  bVar7 = cVar2 == '\0';
  if (bVar7) {
    local_19c = 0xf;
    local_1a8 = (longlong *)0x10000010000036a;
    pplVar6 = &local_1a8;
  }
  else {
    uStack_1bc = 0xf;
    local_1c8 = (longlong *)0x10000010000036b;
    pplVar6 = &local_1c8;
  }
  uVar1 = local_19c;
  uVar8 = uStack_1bc;
  local_1b8 = *(undefined4 *)pplVar6;
  uStack_1b4 = *(undefined4 *)((longlong)pplVar6 + 4);
  uStack_1b0 = *(undefined4 *)(pplVar6 + 1);
  uStack_1ac = *(undefined4 *)((longlong)pplVar6 + 0xc);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1b8);
  if (bVar7) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
  }
  if (!bVar7) {
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_d8);
  local_168 = 0x1f5;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  local_124 = 0;
  local_130 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_130);
  local_168 = 0x1f6;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  local_134 = 0;
  local_140 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_140);
  local_168 = 0x1f8;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar9 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_150,param_1,param_2);
  uStack_1bc = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = (ulonglong)plVar9 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_e8,uVar10,uVar11);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_19c = local_144;
  local_1a0 = local_148;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_150;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_150);
  }
  FUN_1400462a0(&local_1a8,&local_e8);
  if ((local_19c & 0xffffff) == 0) {
    uVar8 = SUB84(local_1a8,0);
  }
  else {
    uVar8 = FUN_140e4b060(&local_1a8);
  }
  uVar4 = FUN_140e79500(uVar8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar4;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_168 = 0x1fa;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uStack_1bc = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_e8,uVar10,uVar11);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_a8,uVar10,uVar11);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a1b910,0x80000000,&local_b8,uVar10,uVar11 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1b8 = (undefined4)local_e8;
  uStack_1b4 = local_e8._4_4_;
  uStack_1b0 = uStack_e0;
  uStack_1ac = uStack_dc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_1b8);
  local_58 = &local_98;
  local_1b8 = (undefined4)local_a8;
  uStack_1b4 = local_a8._4_4_;
  uStack_1b0 = uStack_a0;
  uStack_1ac = uStack_9c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_1b8);
  local_50 = local_88;
  local_1b8 = (undefined4)local_b8;
  uStack_1b4 = local_b8._4_4_;
  uStack_1b0 = uStack_b0;
  uStack_1ac = uStack_ac;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_1b8);
  local_48 = local_78;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x100000000000005;
  local_1b8 = 5;
  uStack_1b4 = 0x1000000;
  uStack_1b0 = uStack_1c0;
  uStack_1ac = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_1b8);
  local_40 = local_68;
  ppuVar12 = &local_58;
  uVar11 = CONCAT44(uVar8,DAT_141a0a7c8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,4,uVar11,ppuVar12);
  if (puVar3 != &local_160) {
    local_1b8 = *(undefined4 *)puVar3;
    uStack_1b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1b0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_1b8);
  }
  FUN_140e87930(uVar4,DAT_1419f6278,0x80000000,&local_160);
  local_168 = 0x1fb;
  uStack_1bc = 6;
  uVar10 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a0a828,0x80000000,&local_c8,uVar11,uVar10);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1b8 = (undefined4)local_c8;
  uStack_1b4 = local_c8._4_4_;
  uStack_1b0 = uStack_c0;
  uStack_1ac = uStack_bc;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  FUN_140041b80(&local_110,&local_1b8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f6278,0x80000000,&local_100,uVar11,uVar10);
  FUN_140e87930(&local_100,DAT_141a1f0d0,0x80000000,&local_110);
  local_168 = 0x1fc;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x100000100000369;
  local_1b8 = 0x369;
  uStack_1b4 = 0x1000001;
  uStack_1b0 = uStack_1c0;
  uStack_1ac = 0xf;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_1b8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_1419f6278,0x80000000,&local_100,uVar11 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  FUN_140e86c30(&local_100,DAT_141a0a728,0x80000000,&local_120);
  local_168 = 0x1fe;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

