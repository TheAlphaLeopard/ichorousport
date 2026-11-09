// gml_Script_scribble_anim_wobble @ 0x140456fa0

undefined8 *
gml_Script_scribble_anim_wobble
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
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined1 local_d8 [48];
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_70;
  undefined1 *local_68 [6];
  
  local_140 = "gml_Script_scribble_anim_wheel";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 6;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddef50) &&
     (_Init_thread_header(&DAT_141ddef50), DAT_141ddef50 == -1)) {
    DAT_141ddef48 = (longlong *)FUN_140e63aa0(DAT_1419f7798);
    _Init_thread_footer(&DAT_141ddef50);
  }
  if (DAT_141ddc17f == '\0') {
    FUN_140e64380(DAT_141ddef48,"gml_Script_scribble_anim_wheel");
    FUN_140e64380(local_res8,"gml_Script_scribble_anim_wheel");
  }
  local_138 = 8;
  if (DAT_141ddc17f == '\0') {
    DAT_141ddc17f = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddef48 + 0x10))(DAT_141ddef48,DAT_1419fee58);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = DAT_1419df7b8;
    uStack_16c = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_178);
    ppuVar11 = &local_70;
    local_70 = local_a8;
    uVar5 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_158,1,ppuVar11)
    ;
    FUN_140e87440(uVar5,DAT_141a05808,0x80000000,&local_118,(ulonglong)ppuVar11 & 0xffffffffffffff00
                  ,0);
    FUN_140e609c0(DAT_141ddef48);
    if (&local_118 != puVar4) {
      local_178 = local_118;
      uStack_170 = uStack_110;
      uStack_16c = uStack_10c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_178);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddef48 + 0x10))(DAT_141ddef48,DAT_141a04cd8);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = DAT_1419df7b8;
    uStack_16c = DAT_1419df7bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_178);
    local_68[0] = local_98;
    ppuVar11 = local_68;
    uVar5 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_168,1,ppuVar11)
    ;
    FUN_140e87440(uVar5,DAT_141a05158,0x80000000,&local_128,(ulonglong)ppuVar11 & 0xffffffffffffff00
                  ,0);
    FUN_140e609c0(DAT_141ddef48);
    if (&local_128 != puVar4) {
      local_178 = local_128;
      uStack_170 = uStack_120;
      uStack_16c = uStack_11c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_178);
    }
    FUN_140e60910(1);
  }
  local_138 = 10;
  plVar6 = (longlong *)(**(code **)(*DAT_141ddef48 + 8))(DAT_141ddef48,DAT_1419fee58);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 0xc) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0xb);
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0xb0);
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
    plVar6 = (longlong *)(**(code **)(*DAT_141ddef48 + 8))(DAT_141ddef48,DAT_1419fee58);
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 0xd) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0xc);
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0xc0);
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
    if (iVar3 == 0) {
      plVar6 = (longlong *)(**(code **)(*DAT_141ddef48 + 8))(DAT_141ddef48,DAT_1419fee58);
      if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x24) < 0xe) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0xd);
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0xd0);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (param_4 < 3) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[2];
      }
      iVar3 = FUN_140e851f0(puVar7,plVar6,DAT_141955260,0);
      if (iVar3 == 0) goto LAB_1404577e9;
    }
  }
  local_138 = 0xe;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141ddef48 + 0x10))(DAT_141ddef48,DAT_1419fee58);
  FUN_140e609c0(DAT_141ddef48);
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*param_5;
  }
  puVar8 = (undefined8 *)FUN_140e48e40(puVar7,0xb);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  if (puVar9 != puVar8) {
    local_178 = *puVar9;
    uStack_170 = *(undefined4 *)(puVar9 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_178);
  }
  FUN_140e60910(2);
  local_138 = 0xf;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141ddef48 + 0x10))(DAT_141ddef48,DAT_1419fee58);
  FUN_140e609c0(DAT_141ddef48);
  if (param_4 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)param_5[1];
  }
  puVar8 = (undefined8 *)FUN_140e48e40(puVar7,0xc);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  if (puVar9 != puVar8) {
    local_178 = *puVar9;
    uStack_170 = *(undefined4 *)(puVar9 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_178);
  }
  FUN_140e60910(2);
  local_138 = 0x10;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141ddef48 + 0x10))(DAT_141ddef48,DAT_1419fee58);
  FUN_140e609c0(DAT_141ddef48);
  if (2 < param_4) {
    puVar4 = (undefined8 *)param_5[2];
  }
  puVar9 = (undefined8 *)FUN_140e48e40(puVar7,0xd);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  if (puVar4 != puVar9) {
    local_178 = *puVar4;
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_178);
  }
  FUN_140e60910(2);
  local_138 = 0x13;
  uVar5 = (**(code **)(*DAT_141ddef48 + 8))(DAT_141ddef48,DAT_141a04cd8);
  iVar3 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar5);
  if (0 < iVar3) {
    do {
      local_138 = 0x15;
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
      local_138 = 0x16;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a059b8);
      uStack_16c = 0xd;
      local_178 = 0;
      if (&local_178 != puVar4) {
        local_108 = 0;
        uStack_104 = 0;
        uStack_100 = uStack_170;
        uStack_fc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_108);
      }
      cVar2 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_f8,&local_res8,&local_res10);
  if (local_e8 != 0) {
    FUN_140e4cd60();
  }
LAB_1404577e9:
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return local_res18;
}

