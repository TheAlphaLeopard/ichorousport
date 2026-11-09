// gml_Script_scribble_anim_shake @ 0x140454bb0

undefined8 *
gml_Script_scribble_anim_shake(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 **ppuVar8;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_120 = "gml_Script_scribble_anim_reset";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 4;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddef18) &&
     (_Init_thread_header(&DAT_141ddef18), DAT_141ddef18 == -1)) {
    DAT_141ddef20 = (longlong *)FUN_140e63aa0(DAT_1419f7748);
    _Init_thread_footer(&DAT_141ddef18);
  }
  if (DAT_141ddc17c == '\0') {
    FUN_140e64380(DAT_141ddef20,"gml_Script_scribble_anim_reset");
    FUN_140e64380(local_res8,"gml_Script_scribble_anim_reset");
  }
  local_118 = 6;
  if (DAT_141ddc17c == '\0') {
    DAT_141ddc17c = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_141a04cd8);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_108 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_100 = DAT_1419df7b8;
    uStack_fc = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_108);
    local_98 = local_b8;
    ppuVar8 = &local_98;
    uVar4 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_e8,1,ppuVar8);
    FUN_140e87440(uVar4,DAT_141a05158,0x80000000,&local_c8,(ulonglong)ppuVar8 & 0xffffffffffffff00,0
                 );
    FUN_140e609c0(DAT_141ddef20);
    if (&local_c8 != puVar3) {
      local_108 = local_c8;
      uStack_100 = uStack_c0;
      uStack_fc = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_108);
    }
    FUN_140e60910(1);
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_108 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_100 = DAT_1419df7b8;
    uStack_fc = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_108);
    local_90 = local_a8;
    ppuVar8 = &local_90;
    uVar4 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_f8,1,ppuVar8);
    FUN_140e87440(uVar4,DAT_141a05808,0x80000000,&local_d8,(ulonglong)ppuVar8 & 0xffffffffffffff00,0
                 );
    FUN_140e609c0(DAT_141ddef20);
    if (&local_d8 != puVar3) {
      local_108 = local_d8;
      uStack_100 = uStack_d0;
      uStack_fc = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_108);
    }
    FUN_140e60910(1);
  }
  local_118 = 7;
  uVar4 = (**(code **)(*DAT_141ddef20 + 8))(DAT_141ddef20,DAT_141a04cd8);
  iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_118 = 9;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05518);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_118 = 0xc;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4010000000000000;
        FUN_140e60910(2);
        local_118 = 0xd;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,1);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4049000000000000;
        FUN_140e60910(2);
        local_118 = 0xe;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,2);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fc999999999999a;
        FUN_140e60910(2);
        local_118 = 0xf;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,3);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4000000000000000;
        FUN_140e60910(2);
        local_118 = 0x10;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,4);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fd999999999999a;
        FUN_140e60910(2);
        local_118 = 0x11;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,5);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fe0000000000000;
        FUN_140e60910(2);
        local_118 = 0x12;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,6);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3f847ae147ae147b;
        FUN_140e60910(2);
        local_118 = 0x13;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,7);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4044000000000000;
        FUN_140e60910(2);
        local_118 = 0x14;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,8);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fc3333333333333;
        FUN_140e60910(2);
        local_118 = 0x15;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,9);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fd999999999999a;
        FUN_140e60910(2);
        local_118 = 0x16;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,10);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fb999999999999a;
        FUN_140e60910(2);
        local_118 = 0x17;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0xb);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3ff0000000000000;
        FUN_140e60910(2);
        local_118 = 0x18;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0xc);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fe0000000000000;
        FUN_140e60910(2);
        local_118 = 0x19;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0xd);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fc999999999999a;
        FUN_140e60910(2);
        local_118 = 0x1a;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0xe);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fe0000000000000;
        FUN_140e60910(2);
        local_118 = 0x1b;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0xf);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4066800000000000;
        FUN_140e60910(2);
        local_118 = 0x1c;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0x10);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x406fe00000000000;
        FUN_140e60910(2);
        local_118 = 0x1d;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0x11);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fe6666666666666;
        FUN_140e60910(2);
        local_118 = 0x1e;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0x12);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3ff3333333333333;
        FUN_140e60910(2);
        local_118 = 0x1f;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0x13);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fd999999999999a;
        FUN_140e60910(2);
        local_118 = 0x20;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddef20 + 0x10))(DAT_141ddef20,DAT_1419fee58);
        FUN_140e609c0(DAT_141ddef20);
        puVar5 = (undefined8 *)FUN_140e48e40(puVar3,0x14);
        FUN_140e609c0(*(undefined8 *)*puVar3);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fd0000000000000;
        FUN_140e60910(2);
        local_118 = 0x22;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05a68);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0x4049000000000000;
        local_118 = 0x23;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05fb8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0x4049000000000000;
        local_118 = 0x24;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a056a8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0;
      }
      local_118 = 0x27;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05818);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_118 = 0x29;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05d28);
        plVar6 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05818);
        cVar1 = FUN_140e491e0(uVar4);
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar6);
        }
        *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
        if (cVar1 == '\0') {
          uVar7 = 0x3ff00000;
        }
        else {
          uVar7 = 0;
        }
        *plVar6 = (ulonglong)uVar7 << 0x20;
        local_118 = 0x2a;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a059b8);
        uStack_fc = 0xd;
        local_108 = 0x3ff0000000000000;
        if (&local_108 != puVar3) {
          local_68 = 0;
          uStack_64 = 0x3ff00000;
          uStack_60 = uStack_100;
          uStack_5c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_68);
        }
      }
      cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

