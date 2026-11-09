// gml_Script____struct___455_gml_Object_oEnemyCageShambler_Create_0 @ 0x140960190

undefined8 *
gml_Script____struct___455_gml_Object_oEnemyCageShambler_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  byte bVar9;
  bool bVar10;
  undefined8 *local_res18 [2];
  undefined4 uVar12;
  longlong *plVar11;
  ulonglong uVar13;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  longlong *local_150;
  undefined4 local_148;
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
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  longlong *local_68;
  undefined8 uStack_60;
  
  local_180 = "gml_Script_anon@9259@___struct___455@gml_Object_oEnemyCageShambler_Create_0";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x1a0;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_144 = 0xffffff;
  local_150 = (longlong *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_164 = 0;
  local_170 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x1a1;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar3 != &local_b8) {
    local_1b8 = (longlong *)*puVar3;
    uStack_1b0 = puVar3[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1b8);
  }
  local_res18[0] = &local_b8;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar12,DAT_141a02ef8),local_res18);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_178 = 0x1a1;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    local_170 = 0;
    local_168 = 0;
    local_164 = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar5 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_170,0,0);
    if (puVar5 != puVar3) {
      local_1b8 = (longlong *)*puVar5;
      uStack_1b0 = puVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_1b8);
    }
    FUN_140e60910(1);
  }
  local_178 = 0x1a2;
  uStack_1b0 = CONCAT44(0xf,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x1000001000000a4;
  local_1a8 = (longlong *)0x1000001000000a4;
  uStack_1a0 = (uint)uStack_1b0;
  uStack_19c = 0xf;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_1a8);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_e0);
  local_178 = 0x1a3;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar11 = param_1;
  uVar8 = param_2;
  FUN_140e87170(uVar6,DAT_1419fe0e8,0x80000000,&local_78,param_1,param_2);
  uStack_19c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar13 = (ulonglong)plVar11 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_88,uVar13,uVar8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  iVar2 = FUN_140e851f0(&local_78,&local_88,DAT_141955260,1);
  bVar10 = iVar2 == -2 || -1 < iVar2;
  if (bVar10) {
    uStack_19c = 0;
    local_1a8 = (longlong *)0x3ff0000000000000;
    pplVar7 = &local_1a8;
    bVar9 = uStack_1b0._4_1_;
  }
  else {
    uStack_1b0 = uStack_1b0 & 0xffffffff;
    local_1b8 = (longlong *)&DAT_bff0000000000000;
    pplVar7 = &local_1b8;
    bVar9 = 0;
  }
  uVar12 = uStack_19c;
  local_68 = *pplVar7;
  uStack_60 = pplVar7[1];
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_68);
  if ((bVar10) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  if ((iVar2 != -2 && -1 >= iVar2) && ((1 << (bVar9 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e87930(uVar4,DAT_141a1eed0,0x80000000,&local_f0);
  local_178 = 0x1a4;
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_141a1eed0,0x80000000,&local_c8,uVar13 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  if (&local_c8 != pplVar7) {
    local_68 = local_c8;
    uStack_60 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_68);
  }
  FUN_140e60910(1);
  local_178 = 0x1a6;
  uStack_1b0 = CONCAT44(0xd,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  uStack_60 = (longlong *)uStack_1b0;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_68);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a06588,0x80000000,&local_100);
  local_178 = 0x1a7;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  local_104 = 0;
  local_110 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_110);
  local_178 = 0x1a8;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  local_114 = 0;
  local_120 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_1419ef328,0x80000000,&local_120);
  local_178 = 0x1aa;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  local_124 = 0;
  local_130 = 0x3fc3333333333333;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a1f310,0x80000000,&local_130);
  local_178 = 0x1ab;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  local_134 = 0;
  local_140 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a1f290,0x80000000,&local_140);
  local_178 = 0x1ad;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11dd8);
  uVar13 = 0;
  FUN_140e63610(param_1,param_2,&local_198,0,uVar8,0);
  local_178 = 0x1af;
  uStack_1b0._4_4_ = 6;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_150,uVar8 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  plVar11 = param_1;
  uVar8 = param_2;
  FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_98,param_1,param_2);
  uStack_19c = local_144;
  uStack_1a0 = local_148;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_150;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_150);
  }
  FUN_1400462a0(&local_1a8,&local_98);
  uStack_1b0 = (ulonglong)(uint)uStack_1b0;
  local_1b8 = (longlong *)0x4038000000000000;
  iVar2 = FUN_140e851f0(&local_1a8,&local_1b8,DAT_141955260,1);
  if ((1 << ((byte)(uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  local_154 = 0xd;
  if (iVar2 < 1) {
    local_160 = 0;
  }
  else {
    local_160 = 0x3ff0000000000000;
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140e87930(uVar6,DAT_1419f0328,0x80000000,&local_160);
  local_178 = 0x1b0;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f03d8);
  FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_a8,(ulonglong)plVar11 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  FUN_140e63610(uVar4,param_2,&local_198,0,&local_a8,0);
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
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
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

