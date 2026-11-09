// gml_Script_anon_6901____struct___399_gml_Object_oBossThePest_Create_0 @ 0x1408156a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6901____struct___399_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffe90;
  ulonglong uVar10;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_130 = "gml_Script_anon@5961@___struct___398@gml_Object_oBossThePest_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x164;
  _eh_vector_constructor_iterator_(&local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x166;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar4 != &local_c8) {
    local_168 = (longlong *)*puVar4;
    uStack_160 = *(undefined4 *)(puVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
  }
  local_68 = &local_c8;
  local_168 = (longlong *)CONCAT44(uRam0000000141dc6a34,_DAT_141dc6a30);
  uStack_160 = uRam0000000141dc6a38;
  uStack_15c = uRam0000000141dc6a3c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_168);
  local_60 = local_b8;
  local_168 = (longlong *)CONCAT44(uRam00000001419e8ab4,_DAT_1419e8ab0);
  uStack_160 = uRam00000001419e8ab8;
  uStack_15c = uRam00000001419e8abc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_168);
  local_58 = local_a8;
  FUN_140e609c0(param_1);
  ppuVar7 = &local_68;
  puVar4 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_158,3,ppuVar7);
  uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_160 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_168,puVar4);
  }
  FUN_140042560(&local_168,uVar3);
  if (&local_168 != puVar5) {
    local_118 = (undefined4)local_168;
    uStack_114 = local_168._4_4_;
    uStack_110 = uStack_160;
    uStack_10c = uStack_15c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_118);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140e60910(1);
  local_128 = 0x167;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_160 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_168,puVar4);
  }
  FUN_140042560(&local_168,uVar3);
  FUN_1400460e0(uVar6,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_128 = 0x169;
  uStack_15c = 6;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a0a728,0x80000000,&local_f8,
                (ulonglong)ppuVar7 & 0xffffffffffffff00,
                in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 0xf;
  local_168 = (longlong *)0x100000100000370;
  iVar2 = FUN_140e851f0(&local_f8,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar2 == 0) {
    local_128 = 0x16a;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
    uVar3 = FUN_140e78f40(0xffffffffffffffff,1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = uVar3;
  }
  local_128 = 0x16c;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_158,0,uVar3,0);
  local_128 = 0x16d;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar10 = 0;
  FUN_140e63610(param_1,param_2,&local_158,0,uVar3,0);
  local_128 = 0x16f;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_118);
  local_68 = &local_c8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_118);
  local_60 = local_b8;
  ppuVar7 = &local_68;
  uVar3 = gml_Script_animcurve_lerp(param_1,param_2,&local_158,2,ppuVar7);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_128 = 0x171;
    uStack_15c = 6;
    uVar10 = uVar10 & 0xffffffffffffff00;
    ppuVar7 = (undefined8 **)((ulonglong)ppuVar7 & 0xffffffffffffff00);
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_141a0a728,0x80000000,&local_f8,ppuVar7,uVar10);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uStack_15c = 0xf;
    local_168 = (longlong *)0x100000100000370;
    iVar2 = FUN_140e851f0(&local_f8,&local_168,DAT_141955260,0);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar2 == 0) {
      local_128 = 0x173;
      uStack_15c = 0xf;
      local_168 = (longlong *)0x10000010000036f;
      local_118 = 0x36f;
      uStack_114 = 0x1000001;
      uStack_110 = uStack_160;
      uStack_10c = 0xf;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_118);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_108);
      local_128 = 0x174;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_cc = 0;
      local_d8 = 0;
      FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
      local_128 = 0x175;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_13c = 0;
      local_148 = 0x3ff0000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_148);
    }
    else {
      local_128 = 0x17a;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      local_168 = (longlong *)0x3ff0000000000000;
      uStack_15c = 0xd;
      local_118 = 0;
      uStack_114 = 0x3ff00000;
      uStack_110 = uStack_160;
      uStack_10c = 0xd;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_118);
      FUN_140e87930(uVar3,DAT_141a09b58,0x80000000,&local_98);
    }
  }
  local_128 = 0x17f;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f6278,0x80000000,&local_78,uVar8,uVar10 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  local_118 = (undefined4)local_78;
  uStack_114 = local_78._4_4_;
  uStack_110 = uStack_70;
  uStack_10c = uStack_6c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_118);
  local_68 = &local_c8;
  ppuVar7 = &local_68;
  uVar10 = CONCAT44(uVar9,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar10,ppuVar7);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_128 = 0x181;
    uStack_15c = 6;
    ppuVar7 = (undefined8 **)((ulonglong)ppuVar7 & 0xffffffffffffff00);
    uVar10 = uVar10 & 0xffffffffffffff00;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_141a0a728,0x80000000,&local_f8,uVar10,ppuVar7);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uStack_15c = 0xf;
    local_168 = (longlong *)0x100000100000371;
    iVar2 = FUN_140e851f0(&local_f8,&local_168,DAT_141955260,0);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar2 == 0) {
      local_128 = 0x183;
      uStack_15c = 0xf;
      local_168 = (longlong *)0x100000100000370;
      local_118 = 0x370;
      uStack_114 = 0x1000001;
      uStack_110 = uStack_160;
      uStack_10c = 0xf;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_118);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_108);
    }
  }
  local_128 = 0x18e;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar3,DAT_141a09b58,0x80000000,&local_88,uVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  cVar1 = FUN_140e491e0(&local_88);
  if (cVar1 == '\0') {
    local_128 = 0x191;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0x3ff0000000000000;
  }
  else {
    local_128 = 399;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
  }
  local_13c = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_148);
  local_128 = 0x193;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  FUN_140e87930(uVar3,DAT_141a1dce0,0x80000000,&local_e8);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

