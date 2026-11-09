// gml_Object_oTongue_Draw_0 @ 0x140dc68e0

void gml_Object_oTongue_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 **in_stack_fffffffffffffea0;
  ulonglong uVar8;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_84;
  undefined4 local_80 [3];
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_b0 = "gml_Object_oTongue_Alarm_1";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_a8 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fddd8);
  if (puVar2 != &local_118) {
    local_148 = *puVar2;
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_118);
  local_a8 = 3;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar3) {
    local_148 = *puVar2;
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  FUN_140e60910(1);
  do {
    local_a8 = 6;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fddd8);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdcf8);
    FUN_140162d40(uVar4,8);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fddd8);
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdcf8);
    local_94 = 6;
    uVar8 = (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00;
    uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
    local_a0 = param_1;
    FUN_140e87440(&local_a0,DAT_1419fe0e8,0x80000000,&local_128,uVar6,uVar8);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_84 = 6;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_90 = param_1;
    FUN_140e87440(&local_90,DAT_1419fe158,0x80000000,&local_138,uVar6,uVar8 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    local_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    local_f0 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_f8 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_f8,puVar2);
    }
    FUN_140042560(&local_f8,uVar4);
    uStack_fc = local_11c;
    uStack_100 = local_120;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_108 = local_128;
    }
    else {
      FUN_1400419b0(&local_108,&local_128);
    }
    FUN_1400460e0(&local_108,&local_f8);
    local_c8 = (undefined4)local_108;
    uStack_c4 = local_108._4_4_;
    uStack_c0 = uStack_100;
    uStack_bc = uStack_fc;
    if ((1 << (local_70[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_c8);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_40 = local_70;
    uStack_dc = local_12c;
    uStack_e0 = local_130;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
      local_e8 = local_138;
    }
    else {
      FUN_1400419b0(&local_e8,&local_138);
    }
    local_74 = 7;
    local_80[0] = 8;
    FUN_1400462a0(&local_e8,local_80);
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    local_c8 = (undefined4)local_e8;
    uStack_c4 = local_e8._4_4_;
    uStack_c0 = uStack_e0;
    uStack_bc = uStack_dc;
    if ((1 << (local_60[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_c8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_38 = local_60;
    uStack_13c = 0xf;
    local_148 = 0x100000000000149;
    local_c8 = 0x149;
    uStack_c4 = 0x1000000;
    uStack_c0 = uStack_140;
    uStack_bc = 0xf;
    if ((1 << (local_50[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_c8);
    local_30 = local_50;
    in_stack_fffffffffffffea0 = &local_40;
    pcVar5 = (code *)CONCAT44(uVar7,DAT_141a10408);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_158,3,pcVar5,in_stack_fffffffffffffea0);
    cVar1 = FUN_140e491e0(uVar4);
  } while (cVar1 == '\0');
  local_a8 = 0xb;
  local_148 = 0x3ff0000000000000;
  uStack_13c = 0xd;
  local_c8 = 0;
  uStack_c4 = 0x3ff00000;
  uStack_c0 = uStack_140;
  uStack_bc = 0xd;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_c8);
  FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_d8);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

