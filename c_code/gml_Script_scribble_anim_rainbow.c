// gml_Script_scribble_anim_rainbow @ 0x1404539d0

undefined8 *
gml_Script_scribble_anim_rainbow
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 **ppuVar11;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [32];
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  ppuVar11 = &local_88;
  local_120 = "gml_Script_scribble_anim_pulse";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 5;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddef08) &&
     (_Init_thread_header(&DAT_141ddef08), DAT_141ddef08 == -1)) {
    DAT_141ddef00 = (longlong *)FUN_140e63aa0(DAT_1419f76f8);
    _Init_thread_footer(&DAT_141ddef08);
  }
  if (DAT_141ddc17a == '\0') {
    FUN_140e64380(DAT_141ddef00,"gml_Script_scribble_anim_pulse");
    FUN_140e64380(local_res8,"gml_Script_scribble_anim_pulse");
  }
  local_118 = 7;
  if (DAT_141ddc17a == '\0') {
    DAT_141ddc17a = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddef00 + 0x10))(DAT_141ddef00,DAT_1419fee58);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_158 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_158);
    local_88 = local_c8;
    uVar5 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_138,1,ppuVar11)
    ;
    FUN_140e87440(uVar5,DAT_141a05808,0x80000000,&local_f8,(ulonglong)ppuVar11 & 0xffffffffffffff00,
                  0);
    FUN_140e609c0(DAT_141ddef00);
    if (&local_f8 != puVar4) {
      local_158 = local_f8;
      uStack_150 = uStack_f0;
      uStack_14c = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_158);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddef00 + 0x10))(DAT_141ddef00,DAT_141a04cd8);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_158);
    local_80 = local_b8;
    ppuVar11 = &local_80;
    uVar5 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_148,1,ppuVar11)
    ;
    FUN_140e87440(uVar5,DAT_141a05158,0x80000000,&local_108,(ulonglong)ppuVar11 & 0xffffffffffffff00
                  ,0);
    FUN_140e609c0(DAT_141ddef00);
    if (&local_108 != puVar4) {
      local_158 = local_108;
      uStack_150 = uStack_100;
      uStack_14c = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_158);
    }
    FUN_140e60910(1);
  }
  local_118 = 9;
  plVar6 = (longlong *)(**(code **)(*DAT_141ddef00 + 8))(DAT_141ddef00,DAT_1419fee58);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 10) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",9);
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x90);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e851f0(puVar7,plVar6,DAT_141955260,0);
  if (iVar3 == 0) {
    plVar6 = (longlong *)(**(code **)(*DAT_141ddef00 + 8))(DAT_141ddef00,DAT_1419fee58);
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 0xb) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",10);
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0xa0);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[1];
    }
    iVar3 = FUN_140e851f0(puVar7,plVar6,DAT_141955260,0);
    if (iVar3 == 0) goto LAB_140454100;
  }
  local_118 = 0xc;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141ddef00 + 0x10))(DAT_141ddef00,DAT_1419fee58);
  FUN_140e609c0(DAT_141ddef00);
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*param_5;
  }
  puVar8 = (undefined8 *)FUN_140e48e40(puVar7,9);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  if (puVar9 != puVar8) {
    local_158 = *puVar9;
    uStack_150 = *(undefined4 *)(puVar9 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_158);
  }
  FUN_140e60910(2);
  local_118 = 0xd;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141ddef00 + 0x10))(DAT_141ddef00,DAT_1419fee58);
  FUN_140e609c0(DAT_141ddef00);
  if (1 < param_4) {
    puVar4 = (undefined8 *)param_5[1];
  }
  puVar9 = (undefined8 *)FUN_140e48e40(puVar7,10);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  if (puVar4 != puVar9) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_158);
  }
  FUN_140e60910(2);
  local_118 = 0x10;
  uVar5 = (**(code **)(*DAT_141ddef00 + 8))(DAT_141ddef00,DAT_141a04cd8);
  iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar5);
  if (0 < iVar3) {
    do {
      local_118 = 0x12;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05d28);
      plVar6 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05818);
      cVar2 = FUN_140e491e0(uVar5);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
      if (cVar2 == '\0') {
        uVar10 = 0x3ff00000;
      }
      else {
        uVar10 = 0;
      }
      *plVar6 = (ulonglong)uVar10 << 0x20;
      local_118 = 0x13;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a059b8);
      uStack_14c = 0xd;
      local_158 = 0;
      if (&local_158 != puVar4) {
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = uStack_150;
        uStack_9c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_a8);
      }
      cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
  }
  param_3 = local_res18;
LAB_140454100:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

