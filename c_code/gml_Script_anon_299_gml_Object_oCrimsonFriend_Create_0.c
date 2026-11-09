// gml_Script_anon_299_gml_Object_oCrimsonFriend_Create_0 @ 0x1408d7380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_299_gml_Object_oCrimsonFriend_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *local_res18 [2];
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff30;
  undefined1 **ppuVar6;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [12];
  byte local_2c;
  
  local_a0 = "gml_Object_oCrimsonFriend_Create_0";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_38,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_98 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a582a0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_98 = 3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a582e0);
  uStack_ac = 0xf;
  local_b8 = 0x100000000000106;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(&local_b8,DAT_1419f58b8,0x80000000,&local_58,uVar4,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e609c0(param_1);
  if (&local_58 != puVar1) {
    local_c8 = (longlong *)local_58;
    uStack_c0 = uStack_50;
    uStack_bc = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_c8);
  }
  FUN_140e60910(1);
  local_98 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_98 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 8;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_90 = 0;
  local_88 = 0;
  local_84 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58300);
  local_c8 = (longlong *)CONCAT44(uRam0000000141dc6cd4,_DAT_141dc6cd0);
  uStack_c0 = uRam0000000141dc6cd8;
  uStack_bc = uRam0000000141dc6cdc;
  if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_38);
  }
  FUN_140041b80(local_38,&local_c8);
  local_res18[0] = local_38;
  FUN_140e609c0(param_1);
  ppuVar6 = local_res18;
  uVar4 = CONCAT44(uVar5,DAT_141a0a0d8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_90,1,uVar4,ppuVar6);
  uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_b8,puVar2);
  }
  uStack_bc = 7;
  local_c8 = (longlong *)CONCAT44(local_c8._4_4_,5);
  FUN_140042560(&local_b8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (&local_b8 != puVar1) {
    local_c8 = (longlong *)local_b8;
    uStack_c0 = uStack_b0;
    uStack_bc = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58300);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a582c0);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar2) {
    local_c8 = (longlong *)*puVar1;
    uStack_c0 = *(undefined4 *)(puVar1 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  FUN_140e60910(1);
  local_98 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0x10;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = 0x3fe8000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_80);
  local_98 = 0x11;
  uStack_bc = 6;
  local_c8 = param_1;
  FUN_140e87440(&local_c8,DAT_141a0f7f8,0x80000000,&local_48,uVar4 & 0xffffffffffffff00,
                (ulonglong)ppuVar6 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8._0_4_ = (undefined4)local_48;
  local_c8._4_4_ = local_48._4_4_;
  uStack_c0 = uStack_40;
  uStack_bc = uStack_3c;
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_c8);
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_70);
  local_98 = 0x15;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a582b0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_c8,gml_Object_oCultIntro_Create_0,param_1);
  if (&local_c8 != puVar1) {
    local_b8 = CONCAT44(local_c8._4_4_,(undefined4)local_c8);
    uStack_b0 = uStack_c0;
    uStack_ac = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_38,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}

