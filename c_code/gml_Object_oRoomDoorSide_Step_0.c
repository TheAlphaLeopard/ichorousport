// gml_Object_oRoomDoorSide_Step_0 @ 0x140d3bd40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRoomDoorSide_Step_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_res18;
  undefined4 uVar8;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 **ppuVar9;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
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
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_c0 = "gml_Object_oRoomDoorSide_Create_0";
  local_b8 = 0;
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  bVar2 = false;
  bVar1 = true;
  local_b8 = 2;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57260);
  uStack_fc = 0xd;
  local_108 = (longlong *)0x0;
  if (&local_108 != puVar4) {
    local_f8 = 0;
    uStack_f0 = uStack_100;
    uStack_ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
  local_b8 = 4;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fc9e8);
  FUN_140e609c0(param_1);
  uStack_fc = 0xf;
  local_108 = (longlong *)0x10000010000010e;
  if (&local_108 != puVar4) {
    local_f8 = 0x10000010000010e;
    uStack_f0 = uStack_100;
    uStack_ec = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fc9d8);
  FUN_140e609c0(param_1);
  uStack_fc = 0xf;
  local_108 = (longlong *)0x10000010000010f;
  if (&local_108 != puVar4) {
    local_f8 = 0x10000010000010f;
    uStack_f0 = uStack_100;
    uStack_ec = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 7;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fca28);
  uStack_fc = 0xd;
  local_108 = (longlong *)0x0;
  if (&local_108 != puVar4) {
    local_f8 = 0;
    uStack_f0 = uStack_100;
    uStack_ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
  local_b8 = 8;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fca18);
  uStack_fc = 0xd;
  local_108 = (longlong *)0x0;
  if (&local_108 != puVar4) {
    local_f8 = 0;
    uStack_f0 = uStack_100;
    uStack_ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
  local_b8 = 10;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fc9e8);
  if (puVar4 != &local_d8) {
    local_108 = (longlong *)*puVar4;
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_108);
  }
  local_res18 = &local_d8;
  uVar6 = CONCAT44(uVar8,DAT_141a049b8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar6,&local_res18);
  uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_f8,puVar4);
  }
  uStack_fc = 7;
  local_108 = (longlong *)CONCAT44(local_108._4_4_,1);
  FUN_1400462a0(&local_f8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = (longlong *)local_f8;
  uStack_100 = uStack_f0;
  uStack_fc = uStack_ec;
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_108);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_70);
  local_b8 = 0xb;
  uStack_fc = 0xf;
  local_108 = (longlong *)0x10000010000011b;
  local_f8 = 0x10000010000011b;
  uStack_f0 = uStack_100;
  uStack_ec = 0xf;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  FUN_140041b80(&local_80,&local_f8);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_80);
  local_b8 = 0xc;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  local_90 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_90);
  local_b8 = 0xe;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_108 = (longlong *)CONCAT44(uRam0000000141ddb2cc,_DAT_141ddb2c8);
  uStack_100 = uRam0000000141ddb2d0;
  uStack_fc = DAT_141ddb2d4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_108);
  local_res18 = &local_d8;
  ppuVar9 = &local_res18;
  uVar7 = CONCAT44(uVar8,DAT_141a1c640);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar7,ppuVar9);
  if (puVar4 != &local_a0) {
    local_108 = (longlong *)*puVar4;
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_108);
  }
  FUN_140e86fa0(param_1,DAT_141a1b910,0x80000000,&local_a0);
  local_b8 = 0xf;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_b0);
  local_b8 = 0x11;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fc9f8);
  uStack_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0f7f8,0x80000000,&local_60,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 0;
  local_108 = (longlong *)0x3ff0000000000000;
  iVar3 = FUN_140e851f0(&local_60,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar3 == 0) {
    uStack_fc = DAT_141ddb2b4;
    uStack_100 = DAT_141ddb2b0;
    if ((1 << ((byte)DAT_141ddb2b4 & 0x1f) & 0x46U) == 0) {
      local_108 = (longlong *)DAT_141ddb2a8;
    }
    else {
      FUN_1400419b0(&local_108,&DAT_141ddb2a8);
    }
    puVar5 = &local_108;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    uStack_ec = DAT_141ddb2c4;
    uStack_f0 = DAT_141ddb2c0;
    if ((1 << ((byte)DAT_141ddb2c4 & 0x1f) & 0x46U) == 0) {
      local_f8 = DAT_141ddb2b8;
    }
    else {
      FUN_1400419b0(&local_f8,&DAT_141ddb2b8);
    }
    puVar5 = &local_f8;
  }
  FUN_140e609c0(param_1);
  if (puVar5 != puVar4) {
    local_50 = *(undefined4 *)puVar5;
    uStack_4c = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_48 = *(undefined4 *)(puVar5 + 1);
    uStack_44 = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_50);
  }
  if (bVar1) {
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
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
  _eh_vector_destructor_iterator_(&local_d8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return;
}

