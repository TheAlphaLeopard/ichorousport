// gml_Script__funcSafeReal_anon_2040__funcSplit_anon_1903___InputCompareVersions___InputCompareVersions @ 0x14006bda0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__funcSafeReal_anon_2040__funcSplit_anon_1903___InputCompareVersions___InputCompareVersions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar7;
  undefined1 **ppuVar6;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_100 = "gml_Script___InputColorSystem";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 4;
  uVar7 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc534) &&
     (_Init_thread_header(&DAT_141ddc534), DAT_141ddc534 == -1)) {
    DAT_141ddc538 = (longlong *)FUN_140e63aa0(DAT_1419fed58);
    _Init_thread_footer(&DAT_141ddc534);
  }
  if (DAT_141ddc038 == '\0') {
    FUN_140e64380(DAT_141ddc538,"gml_Script___InputColorSystem");
    FUN_140e64380(local_res8,"gml_Script___InputColorSystem");
  }
  local_f8 = 6;
  if (DAT_141ddc038 == '\0') {
    DAT_141ddc038 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc538 + 0x10))(DAT_141ddc538,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc538);
    if (puVar3 != &DAT_1419df7b0) {
      local_118 = (undefined4)DAT_1419df7b0;
      uStack_114 = DAT_1419df7b0._4_4_;
      uStack_110 = DAT_1419df7b8;
      uStack_10c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    FUN_140e60910(1);
  }
  local_f8 = 7;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc538 + 8))(DAT_141ddc538,DAT_1419fcb48);
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_f8 = 9;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar4 = (undefined4 *)(**(code **)(*DAT_141ddc538 + 0x10))(DAT_141ddc538,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc538);
    ppuVar6 = (undefined1 **)CONCAT44(uVar7,DAT_1419fd6d8);
    puVar5 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_138,0,ppuVar6,0);
    if (puVar5 != puVar4) {
      local_118 = *puVar5;
      uStack_114 = puVar5[1];
      uStack_110 = puVar5[2];
      uStack_10c = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_118);
    }
    FUN_140e60910(1);
    local_f8 = 10;
    iVar2 = FUN_140e63cb0(local_60,&local_res8,&local_res10,puVar3);
    if (0 < iVar2) {
      do {
        uVar7 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
        (**(code **)(*DAT_141ddc538 + 8))(DAT_141ddc538,DAT_1419fcb48);
        local_f8 = 0xc;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_138 = 0;
        local_130 = 0;
        local_12c = 5;
        (**(code **)(*DAT_141ddc538 + 8))(DAT_141ddc538,DAT_1419fcb48);
        puVar4 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fed38);
        local_128 = _DAT_1419df910;
        uStack_124 = uRam00000001419df914;
        uStack_120 = uRam00000001419df918;
        uStack_11c = uRam00000001419df91c;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_128);
        local_88 = local_e8;
        FUN_140e645a0(&local_98,gml_Script_anon_897_anon_464___InputColorSystem___InputColorSystem,
                      local_res8);
        local_128 = local_98;
        uStack_124 = uStack_94;
        uStack_120 = uStack_90;
        uStack_11c = uStack_8c;
        if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_128);
        if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_80 = local_d8;
        FUN_140e609c0(local_res8);
        puVar5 = (undefined4 *)
                 FUN_140e634e0(local_res8,local_res10,&local_138,2,CONCAT44(uVar7,DAT_1419fd628),
                               &local_88);
        if (puVar5 != puVar4) {
          local_128 = *puVar5;
          uStack_124 = puVar5[1];
          uStack_120 = puVar5[2];
          uStack_11c = puVar5[3];
          if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_128);
        }
        FUN_140e60910(1);
        local_f8 = 0x11;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_138 = 0;
        local_130 = 0;
        local_12c = 5;
        local_128 = _DAT_141dc7b98;
        uStack_124 = uRam0000000141dc7b9c;
        uStack_120 = uRam0000000141dc7ba0;
        uStack_11c = DAT_141dc7ba4;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_128);
        local_88 = local_e8;
        local_128 = _DAT_141dc7bb8;
        uStack_124 = uRam0000000141dc7bbc;
        uStack_120 = uRam0000000141dc7bc0;
        uStack_11c = DAT_141dc7bc4;
        if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_128);
        local_80 = local_d8;
        local_128 = _DAT_141dc7ba8;
        uStack_124 = uRam0000000141dc7bac;
        uStack_120 = uRam0000000141dc7bb0;
        uStack_11c = DAT_141dc7bb4;
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_128);
        local_78 = local_c8;
        local_128 = _DAT_141dc7b88;
        uStack_124 = uRam0000000141dc7b8c;
        uStack_120 = uRam0000000141dc7b90;
        uStack_11c = DAT_141dc7b94;
        if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_128);
        local_70 = local_b8;
        FUN_140e645a0(&local_118,gml_GlobalScript___InputCompareVersions,local_res8);
        local_128 = local_118;
        uStack_124 = uStack_114;
        uStack_120 = uStack_110;
        uStack_11c = uStack_10c;
        if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_128);
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_68 = local_a8;
        ppuVar6 = &local_88;
        gml_Script_InputPlugInError(local_res8,local_res10,&local_138,5,ppuVar6);
        cVar1 = FUN_140e643f0(local_60,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_60,&local_res8,&local_res10);
    local_f8 = 0x28;
    if (puVar3 != param_3) {
      local_128 = *(undefined4 *)puVar3;
      uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_120 = *(undefined4 *)(puVar3 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_128);
    }
    if (local_50 != 0) {
      FUN_140e4cd60();
      local_50 = 0;
    }
  }
  else {
    local_f8 = 7;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc538 + 8))(DAT_141ddc538,DAT_1419fcb48);
    if (puVar3 != param_3) {
      local_118 = *(undefined4 *)puVar3;
      uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_110 = *(undefined4 *)(puVar3 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_118);
    }
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

