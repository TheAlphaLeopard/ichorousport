// gml_Script___scribble_error @ 0x1401eec10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___scribble_error
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 **ppuVar11;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined4 local_6c;
  double local_68;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_d0 = "gml_Script___scribble_trace";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 3;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_fc = 0;
  local_108 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_5c = 0;
  local_68 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 5;
  local_f8 = _DAT_141dcd818;
  uStack_f0 = uRam0000000141dcd820;
  FUN_140041b80(&local_c0,&local_f8);
  local_c8 = 7;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0.0;
  local_c8 = 8;
  iVar2 = FUN_140e4a740(&local_68);
  uVar10 = (undefined4)((ulonglong)pcVar8 >> 0x20);
  do {
    if (iVar2 < 1) {
      local_c8 = 0x16;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      local_58 = &local_c0;
      FUN_140e634e0(param_1,param_2,&local_108,1,CONCAT44(uVar10,DAT_141a03478),&local_58);
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      _eh_vector_destructor_iterator_(&local_a8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_d8;
      return param_3;
    }
    uVar10 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    iVar2 = iVar2 + -1;
    local_c8 = 10;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    iVar3 = FUN_140e4a740(&local_118);
    if (iVar3 < param_4) {
      puVar7 = *(undefined8 **)(param_5 + (longlong)iVar3 * 8);
      if (puVar7 != &local_a8) goto LAB_1401eedbc;
    }
    else {
      puVar7 = &DAT_1419df7b0;
LAB_1401eedbc:
      local_f8 = *puVar7;
      uStack_f0 = puVar7[1];
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_f8);
    }
    local_58 = &local_a8;
    uVar9 = CONCAT44(uVar10,DAT_141a0a0b8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,&local_58);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 == '\0') {
      local_c8 = 0x10;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      iVar3 = FUN_140e4a740(&local_118);
      if (iVar3 < param_4) {
        puVar7 = *(undefined8 **)(param_5 + (longlong)iVar3 * 8);
        if (puVar7 != &local_a8) goto LAB_1401eef9f;
      }
      else {
        puVar7 = &DAT_1419df7b0;
LAB_1401eef9f:
        local_f8 = *puVar7;
        uStack_f0 = puVar7[1];
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_f8);
      }
      local_58 = &local_a8;
      ppuVar11 = &local_58;
      uVar6 = 1;
      puVar7 = &local_108;
      uVar4 = DAT_1419fcb18;
    }
    else {
      local_c8 = 0xc;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      iVar3 = FUN_140e4a740(&local_118);
      if (iVar3 < param_4) {
        puVar7 = *(undefined8 **)(param_5 + (longlong)iVar3 * 8);
        if (puVar7 != &local_98) goto LAB_1401eee81;
      }
      else {
        puVar7 = &DAT_1419df7b0;
LAB_1401eee81:
        local_f8 = *puVar7;
        uStack_f0 = puVar7[1];
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_f8);
      }
      local_50 = &local_98;
      local_f8 = _DAT_141dc6270;
      uStack_f0 = uRam0000000141dc6278;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_f8);
      local_48 = local_88;
      local_f8 = _DAT_1419e3550;
      uStack_f0 = uRam00000001419e3558;
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_f8);
      local_40 = local_78;
      ppuVar11 = &local_50;
      uVar6 = 3;
      puVar7 = &local_e8;
      uVar4 = DAT_141a0a048;
    }
    pcVar8 = (code *)CONCAT44(uVar10,uVar4);
    uVar6 = FUN_140e634e0(param_1,param_2,puVar7,uVar6,pcVar8,ppuVar11);
    FUN_1400460e0(&local_c0,uVar6);
    local_c8 = 0x13;
    uVar5 = local_10c & 0xffffff;
    if (uVar5 == 0) {
LAB_1401ef05d:
      local_118 = local_118 + 1.0;
    }
    else {
      if (uVar5 == 1) {
        local_118 = (double)FUN_140e4b060(&local_118);
        local_10c = 0;
        goto LAB_1401ef05d;
      }
      if (uVar5 == 7) {
        local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
      }
      else if (uVar5 == 10) {
        local_118 = (double)((longlong)local_118 + 1);
      }
      else {
        if (uVar5 == 0xd) {
          local_10c = 0;
          goto LAB_1401ef05d;
        }
        FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
      }
    }
    uVar10 = (undefined4)((ulonglong)pcVar8 >> 0x20);
  } while( true );
}

