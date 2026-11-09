// gml_Object_oRoomDoorSide_Draw_0 @ 0x140d3c690

void gml_Object_oRoomDoorSide_Draw_0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  undefined8 *local_res18;
  code *pcVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong in_stack_fffffffffffffe90;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
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
  double local_a0;
  uint local_94;
  double local_90;
  uint local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_110 = "gml_Object_oRoomDoorSide_Alarm_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_128,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0.0;
  local_94 = 0xffffff;
  local_a0 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_108 = 2;
  uStack_150._4_4_ = 0xf;
  local_158 = 0x1000000000000ff;
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_141a57b10,0x80000000,&local_60,uVar7,in_stack_fffffffffffffe90);
  if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_150._4_4_ = 0xf;
  local_158 = 0x1000000000000ff;
  FUN_140e87440(&local_158,DAT_1419f5eb8,0x80000000,&local_80,uVar7 & 0xffffffffffffff00,
                in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  plVar8 = param_1;
  uVar7 = param_2;
  FUN_140e87170(&local_80,DAT_1419fe0e8,0x80000000,&local_90,param_1,param_2);
  uStack_150._4_4_ = 0xf;
  local_158 = 0x1000000000000ff;
  FUN_140e87440(&local_158,DAT_1419f5eb8,0x80000000,&local_80,(ulonglong)plVar8 & 0xffffffffffffff00
                ,uVar7 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  plVar8 = param_1;
  uVar7 = param_2;
  FUN_140e87170(&local_80,DAT_1419fe158,0x80000000,&local_a0,param_1,param_2);
  dVar4 = local_a0;
  if ((local_94 & 0xffffff) != 0) {
    dVar4 = (double)FUN_140e4b060(&local_a0);
  }
  dVar5 = local_90;
  if ((local_84 & 0xffffff) != 0) {
    dVar5 = (double)FUN_140e4b060(&local_90);
  }
  uVar2 = FUN_140e4a740(&local_60);
  puVar3 = (undefined8 *)FUN_140ea8b20(&local_148,uVar2,(longlong)dVar5,(longlong)dVar4);
  if (puVar3 != &local_d0) {
    local_168 = *puVar3;
    uStack_160 = puVar3[1];
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_168);
  }
  local_108 = 5;
  uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_d0,DAT_1419f6118,0x80000000,&local_70,uVar9,uVar7 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(&local_70);
  if (cVar1 != '\0') {
    local_108 = 7;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fc9d8);
    if (puVar3 != &local_e0) {
      local_168 = *puVar3;
      uStack_160 = puVar3[1];
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_168);
    }
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_e0);
    local_108 = 8;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if (puVar3 != &local_128) {
      local_168 = *puVar3;
      uStack_160 = puVar3[1];
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_168);
    }
    local_res18 = &local_128;
    uVar10 = CONCAT44(uVar2,DAT_141a049b8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar10,&local_res18);
    uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_150 = puVar3[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_158 = *puVar3;
    }
    else {
      FUN_1400419b0(&local_158,puVar3);
    }
    uStack_160._4_4_ = 7;
    local_168 = CONCAT44(local_168._4_4_,1);
    FUN_1400462a0(&local_158,&local_168);
    if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = local_158;
    uStack_160 = uStack_150;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_168);
    if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_b0);
    local_108 = 10;
    uStack_160 = CONCAT44(0xf,(undefined4)uStack_160);
    local_168 = 0x10000010000011b;
    local_158 = 0x10000010000011b;
    uStack_150._0_4_ = (undefined4)uStack_160;
    uStack_150._4_4_ = 0xf;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_138);
    local_108 = 0xb;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fca18);
    uStack_160 = CONCAT44(0xd,(undefined4)uStack_160);
    local_168 = 0x3ff0000000000000;
    if (&local_168 != puVar3) {
      local_158 = 0x3ff0000000000000;
      uStack_150._0_4_ = (undefined4)uStack_160;
      uStack_150._4_4_ = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_158);
    }
  }
  local_108 = 0xf;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fc9f8);
  if (puVar3 != &local_128) {
    local_168 = *puVar3;
    uStack_160 = puVar3[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  local_res18 = &local_128;
  uVar10 = CONCAT44(uVar2,DAT_141a1c640);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar10,&local_res18);
  uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (puVar3 != &local_f0) {
    local_168 = *puVar3;
    uStack_160 = puVar3[1];
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_168);
  }
  local_108 = 0x10;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_res18 = &local_f0;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar2,DAT_141a03a98),&local_res18);
  if (puVar3 != &local_100) {
    local_168 = *puVar3;
    uStack_160 = puVar3[1];
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_168);
  }
  local_108 = 0x11;
  cVar1 = FUN_140e491e0(&local_100);
  if (cVar1 != '\0') {
    local_108 = 0x12;
    uStack_160 = CONCAT44(0xd,(undefined4)uStack_160);
    local_168 = 0;
    local_158 = 0;
    uStack_150 = uStack_160;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_158);
    FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_c0);
    local_108 = 0x13;
    uStack_160 = CONCAT44(0xf,(undefined4)uStack_160);
    local_168 = 0x10000010000011b;
    local_158 = 0x10000010000011b;
    uStack_150._0_4_ = (undefined4)uStack_160;
    uStack_150._4_4_ = 0xf;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_138);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
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
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return;
}

