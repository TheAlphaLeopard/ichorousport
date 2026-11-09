// gml_Script_scribble_external_sound_add @ 0x14045bdb0

undefined8 *
gml_Script_scribble_external_sound_add
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong in_stack_fffffffffffffeb0;
  ulonglong uVar12;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined4 *local_70;
  undefined8 *local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  ppuVar9 = &local_78;
  local_90 = "gml_Script_scribble_external_font_remove";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 10;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_13c = 0;
  local_148 = 0;
  local_10c = 0;
  local_118 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddefc8) &&
     (_Init_thread_header(&DAT_141ddefc8), DAT_141ddefc8 == -1)) {
    DAT_141ddefc0 = (longlong *)FUN_140e63aa0(DAT_1419f78f8);
    _Init_thread_footer(&DAT_141ddefc8);
  }
  if (DAT_141ddc186 == '\0') {
    FUN_140e64380(DAT_141ddefc0,"gml_Script_scribble_external_font_remove");
    FUN_140e64380(param_1,"gml_Script_scribble_external_font_remove");
  }
  local_88 = 0xc;
  if (DAT_141ddc186 == '\0') {
    DAT_141ddc186 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddefc0 + 0x10))(DAT_141ddefc0,DAT_141a06458);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_130 = DAT_1419df7b8;
    uStack_12c = DAT_1419df7bc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
    local_78 = &local_e8;
    uVar5 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_148,1,ppuVar9);
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a06198,0x80000000,&local_58,uVar10,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar10 >> 0x20);
    FUN_140e609c0(DAT_141ddefc0);
    if (&local_58 != puVar4) {
      local_138 = local_58;
      uStack_130 = uStack_50;
      uStack_12c = uStack_4c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_138);
    }
    FUN_140e60910(1);
  }
  local_88 = 0xe;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141ddefc0 + 8))(DAT_141ddefc0,DAT_141a06458);
  if (puVar4 != &local_f8) {
    local_138 = *puVar4;
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
  }
  local_80 = &local_f8;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_14045c0d4:
    local_138 = *puVar6;
    uStack_130 = *(undefined4 *)(puVar6 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 != &local_e8) goto LAB_14045c0d4;
  }
  local_78 = &local_e8;
  uVar11 = CONCAT44(uVar3,DAT_141a01478);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_148,2,uVar11,&local_80);
  uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_88 = 0x10;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uStack_12c = DAT_141dd2e84;
    uStack_130 = DAT_141dd2e80;
    if ((1 << ((byte)DAT_141dd2e84 & 0x1f) & 0x46U) == 0) {
      local_138 = DAT_141dd2e78;
    }
    else {
      FUN_1400419b0(&local_138,&DAT_141dd2e78);
    }
    uVar3 = uStack_12c;
    local_128 = (undefined4)local_138;
    uStack_124 = local_138._4_4_;
    uStack_120 = uStack_130;
    uStack_11c = uStack_12c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_128);
    if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_70 = local_d8;
    if ((param_4 < 1) || (puVar8 = (undefined8 *)*param_5, puVar8 != &local_c8)) {
      local_128 = *(undefined4 *)puVar8;
      uStack_124 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_120 = *(undefined4 *)(puVar8 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_128);
    }
    local_68 = &local_c8;
    puVar7 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_a8,2,&local_70);
    if (puVar7 != local_b8) {
      local_128 = *puVar7;
      uStack_124 = puVar7[1];
      uStack_120 = puVar7[2];
      uStack_11c = puVar7[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_128);
    }
    local_60 = local_b8;
    gml_Script___scribble_error(param_1,param_2,&local_118,1,&local_60);
    local_88 = 0x11;
    goto LAB_14045c72b;
  }
  local_88 = 0x14;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (puVar4 != &local_f8) {
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_128);
  }
  local_80 = &local_f8;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14045c37e:
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_128);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_e8) goto LAB_14045c37e;
  }
  local_78 = &local_e8;
  ppuVar9 = &local_80;
  uVar10 = CONCAT44(uVar3,DAT_1419ff4f8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar10,ppuVar9);
  if (puVar4 != &local_108) {
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_88 = 0x16;
  (**(code **)(*DAT_141ddefc0 + 8))(DAT_141ddefc0,DAT_141a06458);
  uVar12 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_141a06128,0x80000000,&local_38,uVar10,uVar12);
  cVar1 = FUN_140e491e0(&local_38);
  if (cVar1 != '\0') {
    local_88 = 0x18;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uStack_12c = DAT_141dd2e74;
    uStack_130 = DAT_141dd2e70;
    if ((1 << ((byte)DAT_141dd2e74 & 0x1f) & 0x46U) == 0) {
      local_138 = DAT_141dd2e68;
    }
    else {
      FUN_1400419b0(&local_138,&DAT_141dd2e68);
    }
    uVar3 = uStack_12c;
    local_128 = (undefined4)local_138;
    uStack_124 = local_138._4_4_;
    uStack_120 = uStack_130;
    uStack_11c = uStack_12c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_128);
    if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_80 = &local_f8;
    if ((param_4 < 1) || (puVar8 = (undefined8 *)*param_5, puVar8 != &local_e8)) {
      local_128 = *(undefined4 *)puVar8;
      uStack_124 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_120 = *(undefined4 *)(puVar8 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_128);
    }
    local_78 = &local_e8;
    puVar7 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_118,2,&local_80);
    if (puVar7 != local_d8) {
      local_128 = *puVar7;
      uStack_124 = puVar7[1];
      uStack_120 = puVar7[2];
      uStack_11c = puVar7[3];
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_128);
    }
    local_70 = local_d8;
    FUN_1401ef7f0(param_1,param_2,&local_148,1,&local_70);
    local_88 = 0x19;
    goto LAB_14045c72b;
  }
  local_88 = 0x1c;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  FUN_140e87440(&local_108,DAT_141a06178,0x80000000,&local_48,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  switch(local_fc) {
  default:
switchD_14045c68a_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_108;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14045c68a_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_108);
    uVar5 = FUN_140e87250(uVar3);
  }
  FUN_140e63610(uVar5,param_2,&local_148,0,&local_48,0);
  local_88 = 0x1d;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  gml_Script_scribble_rgb_to_bgr(param_1,param_2,&local_148,0,0);
LAB_14045c72b:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

