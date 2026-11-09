// gml_Script_drop_ball_gml_Object_oSpikePile_Create_0 @ 0x140d9bd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_drop_ball_gml_Object_oSpikePile_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Object_oSpikePile_Create_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_48 = 1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01228);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_a8,gml_Object_oSpikePile_Step_0,0);
  if (&local_a8 != puVar1) {
    local_e8 = local_a8;
    uStack_e0 = uStack_a0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  if ((1 << ((byte)((ulonglong)uStack_a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140e60910(1);
  local_48 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09c38);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_a8,gml_Object_oSpikePile_Draw_0,param_1);
  if (&local_a8 != puVar1) {
    local_e8 = local_a8;
    uStack_e0 = uStack_a0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)((ulonglong)uStack_a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_48 = 0x3f;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a011f8);
  FUN_140e609c0(param_1);
  uVar3 = CONCAT44(uVar4,DAT_1419ef5d8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,0,uVar3,0);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != puVar1) {
    local_e8 = *puVar2;
    uStack_e0 = puVar2[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  FUN_140e60910(1);
  local_48 = 0x40;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56f60);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4024000000000000;
  local_48 = 0x44;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01228);
  if (puVar1 != &local_c8) {
    local_e8 = *puVar1;
    uStack_e0 = puVar1[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_98 = &local_c8;
  local_e8 = CONCAT44(uRam0000000141dc7774,_DAT_141dc7770);
  uStack_e0 = CONCAT44(uRam0000000141dc777c,uRam0000000141dc7778);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_90 = (undefined8 *)local_b8;
  uVar3 = CONCAT44(uVar4,DAT_1419fd6d8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar3,&local_98);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_d8) {
    local_e8 = *puVar2;
    uStack_e0 = puVar2[1];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  uStack_a0 = CONCAT44(0xd,(undefined4)uStack_a0);
  local_a8 = 0;
  local_e8 = 0;
  uStack_e0 = uStack_a0;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_e8);
  FUN_140e87930(&local_d8,DAT_141a01238,0x80000000,&local_68);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011f8);
  if (puVar2 != &local_c8) {
    local_e8 = *puVar2;
    uStack_e0 = puVar2[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_98 = &local_c8;
  local_90 = &local_d8;
  uVar3 = CONCAT44(uVar4,DAT_141a57350);
  FUN_140e634e0(param_1,param_2,&local_f8,2,uVar3,&local_98);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48 = 0x45;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (puVar1 != &local_c8) {
    local_e8 = *puVar1;
    uStack_e0 = puVar1[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_98 = &local_c8;
  local_e8 = CONCAT44(uRam00000001419edf04,_DAT_1419edf00);
  uStack_e0 = CONCAT44(uRam00000001419edf0c,uRam00000001419edf08);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_90 = (undefined8 *)local_b8;
  uVar3 = CONCAT44(uVar4,DAT_1419fd6d8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar3,&local_98);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != &local_d8) {
    local_e8 = *puVar1;
    uStack_e0 = puVar1[1];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  uStack_a0 = CONCAT44(0xd,(undefined4)uStack_a0);
  local_a8 = 0;
  local_e8 = 0;
  uStack_e0 = uStack_a0;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_e8);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01228);
  FUN_140e87930(&local_d8,DAT_141a01238,0x80000000,&local_78);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (puVar2 != &local_c8) {
    local_e8 = *puVar2;
    uStack_e0 = puVar2[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_98 = &local_c8;
  local_90 = &local_d8;
  uVar3 = CONCAT44(uVar4,DAT_141a57350);
  FUN_140e634e0(param_1,param_2,&local_f8,2,uVar3,&local_98);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48 = 0x46;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (puVar1 != &local_c8) {
    local_e8 = *puVar1;
    uStack_e0 = puVar1[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_98 = &local_c8;
  local_e8 = CONCAT44(uRam00000001419edee4,_DAT_1419edee0);
  uStack_e0 = CONCAT44(uRam00000001419edeec,uRam00000001419edee8);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_90 = (undefined8 *)local_b8;
  uVar3 = CONCAT44(uVar4,DAT_1419fd6d8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar3,&local_98);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != &local_d8) {
    local_e8 = *puVar1;
    uStack_e0 = puVar1[1];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  uStack_a0 = CONCAT44(0xd,(undefined4)uStack_a0);
  local_a8 = 0;
  local_e8 = 0;
  uStack_e0 = uStack_a0;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_e8);
  (**(code **)(*param_1 + 8))(param_1,DAT_141a01228);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011f8);
  FUN_140e87930(&local_d8,DAT_141a01238,0x80000000,&local_88);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (puVar1 != &local_c8) {
    local_e8 = *puVar1;
    uStack_e0 = puVar1[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_98 = &local_c8;
  local_90 = &local_d8;
  FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar4,DAT_141a57350),&local_98);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

