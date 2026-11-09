// gml_Script_anon_2972____struct___507_gml_Object_oEnemyRotFly_Create_0 @ 0x140a25420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2972____struct___507_gml_Object_oEnemyRotFly_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar11;
  ulonglong uVar10;
  undefined8 **ppuVar12;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  longlong *local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  longlong *local_198;
  undefined4 local_190;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  uint local_16c;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  double local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  byte local_b4;
  undefined1 local_b0 [12];
  byte local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 *local_90;
  undefined1 *local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  
  local_150 = "gml_Script_anon@1577@___struct___507@gml_Object_oEnemyRotFly_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x5c;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_c0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0.0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_94 = 0;
  local_a0 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x5d;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar2 != &local_c0) {
    local_1b8 = (longlong *)*puVar2;
    uStack_1b0 = *(undefined4 *)(puVar2 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_1b8);
  }
  local_90 = &local_c0;
  ppuVar12 = &local_90;
  uVar10 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_a0,1,uVar10,ppuVar12);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_148 = 0x5f;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_d0,uVar10 & 0xffffffffffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    local_1b8 = (longlong *)CONCAT44(uRam0000000141dd8cec,_DAT_141dd8ce8);
    uStack_1b0 = uRam0000000141dd8cf0;
    uStack_1ac = DAT_141dd8cf4;
    if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b0);
    }
    FUN_140041b80(local_b0,&local_1b8);
    local_88[0] = local_b0;
    uVar3 = FUN_140069500(uVar3);
    FUN_140e63610(uVar3,param_2,&local_188,1,&local_d0,local_88);
    local_148 = 0x60;
  }
  else {
    local_148 = 99;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f19a8);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    plVar8 = param_1;
    uVar10 = param_2;
    FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_198,param_1,param_2);
    uStack_1ac = 6;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_168,
                  (ulonglong)plVar8 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1ac = local_18c;
    uStack_1b0 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_198;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_198);
    }
    FUN_1400462a0(&local_1b8,&local_168);
    local_78 = (undefined4)local_1b8;
    uStack_74 = local_1b8._4_4_;
    uStack_70 = uStack_1b0;
    uStack_6c = uStack_1ac;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_78);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140e87930(uVar3,DAT_1419f18d8,0x80000000,&local_e0);
    local_148 = 100;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f19a8);
    plVar8 = param_1;
    uVar10 = param_2;
    FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_1a8,param_1,param_2);
    uStack_1ac = 6;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,
                  (ulonglong)plVar8 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1ac = local_19c;
    uStack_1b0 = local_1a0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_1a8);
    }
    FUN_1400462a0(&local_1b8,&local_178);
    local_78 = (undefined4)local_1b8;
    uStack_74 = local_1b8._4_4_;
    uStack_70 = uStack_1b0;
    uStack_6c = uStack_1ac;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_78);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140e87930(uVar4,DAT_1419f1958,0x80000000,&local_f0);
    local_148 = 0x66;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_198,param_1,param_2);
    plVar8 = param_1;
    FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_1a8,param_1,param_2);
    uStack_1ac = 6;
    param_2 = param_2 & 0xffffffffffffff00;
    uVar10 = (ulonglong)plVar8 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_168,uVar10,param_2);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1ac = 6;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,uVar10 & 0xffffffffffffff00,
                  param_2 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    dVar6 = local_178;
    if ((local_16c & 0xffffff) != 0) {
      dVar6 = (double)FUN_140e4b060(&local_178);
    }
    dVar7 = local_168;
    if ((local_15c & 0xffffff) != 0) {
      dVar7 = (double)FUN_140e4b060(&local_168);
    }
    plVar8 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      plVar8 = (longlong *)FUN_140e4b060(&local_1a8);
    }
    plVar9 = local_198;
    if ((local_18c & 0xffffff) != 0) {
      plVar9 = (longlong *)FUN_140e4b060(&local_198);
    }
    fVar5 = (float)FUN_140e793d0((float)(double)plVar9,(float)(double)plVar8,(float)dVar7,
                                 (float)dVar6);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_f4 = 0;
    local_100 = (double)fVar5;
    FUN_140e87930(uVar3,DAT_141a1eed0,0x80000000,&local_100);
    local_148 = 0x67;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    local_104 = 0;
    local_110 = 0x4000000000000000;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87930(uVar3,DAT_141a1f290,0x80000000,&local_110);
    local_148 = 0x68;
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    local_114 = 0;
    local_120 = 0;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_120);
    local_148 = 0x6a;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    local_124 = 0;
    local_130 = 0x3ff0000000000000;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87930(uVar3,DAT_141a067b8,0x80000000,&local_130);
    local_148 = 0x6b;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    local_134 = 0;
    local_140 = 0x4034000000000000;
    FUN_140e86fa0(param_1,DAT_141a0a7e8,2,&local_140);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
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
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(&local_c0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

