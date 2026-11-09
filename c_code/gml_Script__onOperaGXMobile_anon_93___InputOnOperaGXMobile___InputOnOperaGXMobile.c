// gml_Script__onOperaGXMobile_anon_93___InputOnOperaGXMobile___InputOnOperaGXMobile @ 0x1400bc2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__onOperaGXMobile_anon_93___InputOnOperaGXMobile___InputOnOperaGXMobile
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
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_f0 = "gml_Script___InputMotionSystem";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 4;
  uVar7 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_12c = 0;
  local_138 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc750) &&
     (_Init_thread_header(&DAT_141ddc750), DAT_141ddc750 == -1)) {
    DAT_141ddc748 = (longlong *)FUN_140e63aa0(DAT_141a01f48);
    _Init_thread_footer(&DAT_141ddc750);
  }
  if (DAT_141ddc04a == '\0') {
    FUN_140e64380(DAT_141ddc748,"gml_Script___InputMotionSystem");
    FUN_140e64380(local_res8,"gml_Script___InputMotionSystem");
  }
  local_e8 = 6;
  if (DAT_141ddc04a == '\0') {
    DAT_141ddc04a = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc748 + 0x10))(DAT_141ddc748,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc748);
    if (puVar3 != &DAT_1419df7b0) {
      local_108 = (undefined4)DAT_1419df7b0;
      uStack_104 = DAT_1419df7b0._4_4_;
      uStack_100 = DAT_1419df7b8;
      uStack_fc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_108);
    }
    FUN_140e60910(1);
  }
  local_e8 = 7;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc748 + 8))(DAT_141ddc748,DAT_1419fcb48);
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_e8 = 9;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar4 = (undefined4 *)(**(code **)(*DAT_141ddc748 + 0x10))(DAT_141ddc748,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc748);
    ppuVar6 = (undefined1 **)CONCAT44(uVar7,DAT_1419fd6d8);
    puVar5 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_138,0,ppuVar6,0);
    if (puVar5 != puVar4) {
      local_108 = *puVar5;
      uStack_104 = puVar5[1];
      uStack_100 = puVar5[2];
      uStack_fc = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_108);
    }
    FUN_140e60910(1);
    local_e8 = 10;
    iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,puVar3);
    if (0 < iVar2) {
      do {
        uVar7 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
        (**(code **)(*DAT_141ddc748 + 8))(DAT_141ddc748,DAT_1419fcb48);
        local_e8 = 0xc;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_138 = 0;
        local_130 = 0;
        local_12c = 5;
        (**(code **)(*DAT_141ddc748 + 8))(DAT_141ddc748,DAT_1419fcb48);
        puVar4 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419febc8);
        FUN_140e609c0(local_res8);
        puVar5 = (undefined4 *)
                 FUN_140e634e0(local_res8,local_res10,&local_138,0,CONCAT44(uVar7,DAT_1419ff3e8),0);
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
        local_e8 = 0xd;
        puVar4 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01f18);
        FUN_140e609c0(local_res8);
        puVar5 = (undefined4 *)FUN_140e8da20(&local_138,local_res8,0);
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
        local_e8 = 0xf;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        local_128 = _DAT_141dcaf58;
        uStack_124 = uRam0000000141dcaf5c;
        uStack_120 = uRam0000000141dcaf60;
        uStack_11c = DAT_141dcaf64;
        if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_128);
        local_68 = local_d8;
        local_128 = _DAT_141dcaf48;
        uStack_124 = uRam0000000141dcaf4c;
        uStack_120 = uRam0000000141dcaf50;
        uStack_11c = DAT_141dcaf54;
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_128);
        local_60 = local_c8;
        local_128 = _DAT_141dcaf28;
        uStack_124 = uRam0000000141dcaf2c;
        uStack_120 = uRam0000000141dcaf30;
        uStack_11c = DAT_141dcaf34;
        if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_128);
        local_58 = local_b8;
        local_128 = _DAT_141dcaf38;
        uStack_124 = uRam0000000141dcaf3c;
        uStack_120 = uRam0000000141dcaf40;
        uStack_11c = DAT_141dcaf44;
        if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_128);
        local_50 = local_a8;
        FUN_140e645a0(&local_108,gml_GlobalScript___InputOnOperaGXMobile,local_res8);
        local_128 = local_108;
        uStack_124 = uStack_104;
        uStack_120 = uStack_100;
        uStack_11c = uStack_fc;
        if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_128);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_48 = local_98;
        ppuVar6 = &local_68;
        gml_Script_InputPlugInError(local_res8,local_res10,&local_118,5,&local_68);
        cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_88,&local_res8,&local_res10);
    local_e8 = 0x39;
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
    if (local_78 != 0) {
      FUN_140e4cd60();
      local_78 = 0;
    }
  }
  else {
    local_e8 = 7;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc748 + 8))(DAT_141ddc748,DAT_1419fcb48);
    if (puVar3 != param_3) {
      local_108 = *(undefined4 *)puVar3;
      uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_100 = *(undefined4 *)(puVar3 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_108);
    }
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

