// gml_Script_anon_18029____struct___648_gml_Object_oPlayer_Create_0 @ 0x140c05dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_18029____struct___648_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  byte bVar9;
  bool bVar10;
  code *pcVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffe50;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 *local_178;
  undefined4 local_16c;
  undefined1 *local_168;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
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
  byte local_a4;
  undefined1 local_a0 [12];
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 local_64;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_140 = "gml_Script_anon@16311@___struct___648@gml_Object_oPlayer_Create_0";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x338;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_b0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_124 = 0xffffff;
  local_130 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_15c = 0xffffff;
  local_168 = (undefined1 *)0x0;
  local_16c = 0xffffff;
  local_178 = (undefined1 *)0x0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x339;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_130,uVar12,in_stack_fffffffffffffe50);
  FUN_140e87440(&local_130,DAT_1419f5fd8,0x80000000,&local_80,uVar12 & 0xffffffffffffff00,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  uStack_17c = DAT_141dda634;
  uStack_180 = DAT_141dda630;
  if ((1 << ((byte)DAT_141dda634 & 0x1f) & 0x46U) == 0) {
    local_188 = DAT_141dda628;
  }
  else {
    FUN_1400419b0(&local_188,&DAT_141dda628);
  }
  switch(local_124) {
  default:
switchD_140c05fa3_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_130;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_130 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140c05fa3_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_130);
    uVar6 = FUN_140e87250(uVar3);
  }
  puVar7 = &local_80;
  uVar6 = FUN_140e63610(uVar6,param_2,&local_198,0,puVar7,0);
  uVar3 = (undefined4)((ulonglong)puVar7 >> 0x20);
  iVar4 = FUN_140e851f0(uVar6,&local_188,DAT_141955260,0);
  bVar10 = iVar4 != 0;
  if (bVar10) {
    local_64 = 0xf;
    local_70 = (undefined1 *)0x10000010000040c;
    ppuVar8 = &local_70;
    bVar9 = uStack_150._4_1_;
  }
  else {
    uStack_150 = (undefined1 *)CONCAT44(0xf,(undefined4)uStack_150);
    local_158 = (undefined1 *)0x10000010000040d;
    ppuVar8 = &local_158;
    bVar9 = 0xf;
  }
  uVar1 = local_64;
  local_1a8 = *ppuVar8;
  uStack_1a0 = ppuVar8[1];
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_1a8);
  if ((bVar10) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_70);
  }
  if ((!bVar10) && ((1 << (bVar9 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86c30(uVar5,DAT_141a0a728,0x80000000,&local_c0);
  local_138 = 0x33b;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_e4 = 0;
  local_f0 = 0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar5,DAT_141a0cfc8,0x80000000,&local_f0);
  local_138 = 0x33c;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff368);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff9f8);
  uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_180 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_188,puVar7);
  }
  FUN_1400460e0(&local_188,uVar5);
  local_1a8 = (undefined1 *)local_188;
  uStack_1a0 = (undefined1 *)CONCAT44(uStack_17c,uStack_180);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  FUN_140041b80(&local_d0,&local_1a8);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar5,DAT_141a0a818,0x80000000,&local_d0);
  local_138 = 0x33e;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_f4 = 0;
  local_100 = 0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar5,DAT_1419fe0e8,0x80000000,&local_100);
  local_138 = 0x33f;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  local_104 = 0;
  local_110 = 0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar5,DAT_1419fe158,0x80000000,&local_110);
  local_138 = 0x341;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  local_114 = 0;
  local_120 = 0;
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_120);
  local_138 = 0x342;
  uStack_150 = (undefined1 *)CONCAT44(0xd,(undefined4)uStack_150);
  local_158 = (undefined1 *)0x0;
  local_1a8 = (undefined1 *)0x0;
  uStack_1a0 = uStack_150;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_1a8);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(puVar7,DAT_1419f87f8,0x80000000,&local_e0);
  local_138 = 0x344;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if (puVar7 != &local_b0) {
    local_1a8 = (undefined1 *)*puVar7;
    uStack_1a0 = (undefined1 *)puVar7[1];
    if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_1a8);
  }
  local_60 = &local_b0;
  local_1a8 = (undefined1 *)CONCAT44(uRam0000000141dda85c,_DAT_141dda858);
  uStack_1a0 = (undefined1 *)CONCAT44(DAT_141dda864,uRam0000000141dda860);
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_1a8);
  local_58 = local_a0;
  uVar6 = CONCAT44(uVar3,DAT_1419fcba8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_198,2,uVar6,&local_60);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_138 = 0x346;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_168 = &DAT_bff0000000000000;
    FUN_140e87930(uVar5,DAT_1419f73b8,0x80000000,&local_168);
    local_138 = 0x347;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_16c = 0;
    local_178 = &DAT_bff0000000000000;
    FUN_140e87930(uVar5,DAT_1419f7db8,0x80000000,&local_178);
  }
  local_138 = 0x34a;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7b98);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_138 = 0x34c;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_168 = &DAT_bff0000000000000;
    FUN_140e87930(uVar5,DAT_1419f73b8,0x80000000,&local_168);
    local_138 = 0x34d;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    local_1a8 = (undefined1 *)CONCAT44(uRam00000001419ecce4,_DAT_1419ecce0);
    uStack_1a0 = (undefined1 *)CONCAT44(uRam00000001419eccec,uRam00000001419ecce8);
    if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_1a8);
    local_60 = &local_b0;
    local_1a8 = (undefined1 *)CONCAT44(uRam00000001419ecdb4,_DAT_1419ecdb0);
    uStack_1a0 = (undefined1 *)CONCAT44(uRam00000001419ecdbc,uRam00000001419ecdb8);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a0);
    }
    FUN_140041b80(local_a0,&local_1a8);
    local_58 = local_a0;
    FUN_140e645a0(&local_158,gml_Script_anon_16908____struct___648_gml_Object_oPlayer_Create_0,
                  param_1);
    local_1a8 = local_158;
    uStack_1a0 = uStack_150;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_1a8);
    if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_50 = local_90;
    ppuVar8 = (undefined1 **)
              FUN_140e634e0(param_1,param_2,&local_198,3,CONCAT44(uVar3,DAT_1419f4dd8),&local_60);
    if (ppuVar8 != &local_178) {
      local_1a8 = *ppuVar8;
      uStack_1a0 = ppuVar8[1];
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1a8);
    }
    FUN_140e87930(uVar5,DAT_1419f7db8,0x80000000,&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
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
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  _eh_vector_destructor_iterator_(&local_b0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

