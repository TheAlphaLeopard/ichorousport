// gml_Script____struct___448_gml_Object_oEnemyCageCharger_Create_0 @ 0x14094e3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___448_gml_Object_oEnemyCageCharger_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffeb0;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_110 = "gml_Script_anon@3788@___struct___448@gml_Object_oEnemyCageCharger_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0xc0;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_7c = 0xffffff;
  local_88 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_12c = 0;
  local_138 = 0;
  local_f4 = 0;
  local_100 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0xc2;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_140 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_148,puVar4);
  }
  FUN_140042560(&local_148,puVar3);
  FUN_1400460e0(uVar5,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_108 = 0xc4;
  if (puVar3 != &local_88) {
    local_128 = (longlong *)*puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_108 = 0xc6;
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0a728,0x80000000,&local_38,(ulonglong)pcVar6 & 0xffffffffffffff00
                ,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 0xf;
  local_148 = (longlong *)0x100000100000094;
  iVar2 = FUN_140e851f0(&local_38,&local_148,DAT_141955260,0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar2 == 0) {
    local_108 = 200;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar3 != &local_e8) {
      local_128 = (longlong *)*puVar3;
      uStack_120 = *(undefined4 *)(puVar3 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_128);
    }
    local_68 = &local_e8;
    uStack_13c = 0;
    local_148 = (longlong *)0x3ffc000000000000;
    FUN_140042560(&local_148,uVar5);
    local_128 = local_148;
    uStack_120 = uStack_140;
    uStack_11c = uStack_13c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_128);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_60 = local_d8;
    local_128 = (longlong *)CONCAT44(uRam00000001419ea404,_DAT_1419ea400);
    uStack_120 = uRam00000001419ea408;
    uStack_11c = uRam00000001419ea40c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_128);
    local_58 = local_c8;
    FUN_140e609c0(param_1);
    puVar3 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_138,3,&local_68);
    if (puVar3 != puVar4) {
      local_128 = (longlong *)*puVar3;
      uStack_120 = *(undefined4 *)(puVar3 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_128);
    }
    FUN_140e60910(1);
  }
  local_108 = 0xcc;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x100000100000095;
  local_148 = (longlong *)0x100000100000095;
  uStack_140 = uStack_120;
  uStack_13c = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_148);
  local_68 = &local_e8;
  local_128 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_60 = local_d8;
  ppuVar7 = &local_68;
  uVar5 = gml_Script_animcurve_lerp(param_1,param_2,&local_138,2,ppuVar7);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_108 = 0xcd;
    uStack_11c = 0xf;
    local_128 = (longlong *)0x100000100000094;
    local_148 = (longlong *)0x100000100000094;
    uStack_140 = uStack_120;
    uStack_13c = 0xf;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_148);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_78);
  }
  local_108 = 0xcf;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_98,uVar8,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_a8,uVar8,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = local_8c;
  uStack_140 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_148 = local_98;
  }
  else {
    FUN_1400419b0(&local_148,&local_98);
  }
  FUN_1400460e0(&local_148,uVar5);
  local_128 = local_148;
  uStack_120 = uStack_140;
  uStack_11c = uStack_13c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_128);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_68 = &local_e8;
  uStack_13c = local_9c;
  uStack_140 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_148 = local_a8;
  }
  else {
    FUN_1400419b0(&local_148,&local_a8);
  }
  uStack_11c = 7;
  local_128 = (longlong *)CONCAT44(local_128._4_4_,1);
  FUN_1400462a0(&local_148,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_148;
  uStack_120 = uStack_140;
  uStack_11c = uStack_13c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_60 = local_d8;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x100000000000149;
  local_148 = (longlong *)0x100000000000149;
  uStack_140 = uStack_120;
  uStack_13c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_58 = local_c8;
  ppuVar7 = &local_68;
  uVar8 = CONCAT44(uVar9,DAT_141a12628);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_138,3,uVar8,ppuVar7);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_108 = 0xd6;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_138,0,uVar5,0);
    local_108 = 0xd7;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    FUN_140e63610(param_1,param_2,&local_138,0,uVar5,0);
    local_108 = 0xd8;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
    FUN_140e63610(param_1,param_2,&local_138,0,uVar5,0);
  }
  else {
    local_108 = 0xd1;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_100 = 0;
    local_f8 = 0;
    local_f4 = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_48,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    local_128 = (longlong *)CONCAT44(uRam0000000141dd871c,_DAT_141dd8718);
    uStack_120 = uRam0000000141dd8720;
    uStack_11c = DAT_141dd8724;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_128);
    local_50 = local_b8;
    uVar5 = FUN_140069500(uVar5);
    FUN_140e63610(uVar5,param_2,&local_100,1,&local_48,&local_50);
    local_108 = 0xd2;
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

