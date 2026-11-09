// gml_Script___InputPlugInExecuteCallbacks @ 0x1400bf570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputPlugInExecuteCallbacks(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar7;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  local_150 = "gml_Script___InputPartySystem";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 4;
  uVar7 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc774) &&
     (_Init_thread_header(&DAT_141ddc774), DAT_141ddc774 == -1)) {
    DAT_141ddc778 = (longlong *)FUN_140e63aa0(DAT_141a022b8);
    _Init_thread_footer(&DAT_141ddc774);
  }
  if (DAT_141ddc04d == '\0') {
    FUN_140e64380(DAT_141ddc778,"gml_Script___InputPartySystem");
    FUN_140e64380(local_res8,"gml_Script___InputPartySystem");
  }
  local_148 = 6;
  if (DAT_141ddc04d == '\0') {
    DAT_141ddc04d = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc778 + 0x10))(DAT_141ddc778,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc778);
    if (puVar3 != &DAT_1419df7b0) {
      local_138 = (undefined4)DAT_1419df7b0;
      uStack_134 = DAT_1419df7b0._4_4_;
      uStack_130 = DAT_1419df7b8;
      uStack_12c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_138);
    }
    FUN_140e60910(1);
  }
  local_148 = 7;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc778 + 8))(DAT_141ddc778,DAT_1419fcb48);
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_148 = 9;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar4 = (undefined4 *)(**(code **)(*DAT_141ddc778 + 0x10))(DAT_141ddc778,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc778);
    puVar5 = (undefined4 *)
             FUN_140e634e0(local_res8,local_res10,&local_168,0,CONCAT44(uVar7,DAT_1419fd6d8),0);
    if (puVar5 != puVar4) {
      local_138 = *puVar5;
      uStack_134 = puVar5[1];
      uStack_130 = puVar5[2];
      uStack_12c = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_138);
    }
    FUN_140e60910(1);
    local_148 = 10;
    iVar2 = FUN_140e63cb0(local_a8,&local_res8,&local_res10,puVar3);
    if (0 < iVar2) {
      do {
        (**(code **)(*DAT_141ddc778 + 8))(DAT_141ddc778,DAT_1419fcb48);
        local_148 = 0xc;
        (**(code **)(*DAT_141ddc778 + 8))(DAT_141ddc778,DAT_1419fcb48);
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02258);
        uStack_cc = 0xd;
        local_d8 = 0;
        if (&local_d8 != puVar6) {
          local_178 = 0;
          uStack_174 = 0;
          uStack_170 = uStack_d0;
          uStack_16c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_178);
        }
        local_148 = 0xe;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a021e8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0x3ff0000000000000;
        local_148 = 0xf;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a021c8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0x3ff0000000000000;
        local_148 = 0x10;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02158);
        uStack_bc = 0xd;
        local_c8 = 0x3ff0000000000000;
        if (&local_c8 != puVar6) {
          local_178 = 0;
          uStack_174 = 0x3ff00000;
          uStack_170 = uStack_c0;
          uStack_16c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_178);
        }
        local_148 = 0x11;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02228);
        FUN_140e609c0(local_res8);
        if (puVar6 != &DAT_1419df7b0) {
          local_178 = (undefined4)DAT_1419df7b0;
          uStack_174 = DAT_1419df7b0._4_4_;
          uStack_170 = DAT_1419df7b8;
          uStack_16c = DAT_1419df7bc;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_178);
        }
        FUN_140e60910(1);
        local_148 = 0x12;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02128);
        FUN_140e609c0(local_res8);
        if (puVar6 != &DAT_1419df7b0) {
          local_178 = (undefined4)DAT_1419df7b0;
          uStack_174 = DAT_1419df7b0._4_4_;
          uStack_170 = DAT_1419df7b8;
          uStack_16c = DAT_1419df7bc;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_178);
        }
        FUN_140e60910(1);
        local_148 = 0x13;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02168);
        FUN_140e609c0(local_res8);
        if (puVar6 != &DAT_1419df7b0) {
          local_178 = (undefined4)DAT_1419df7b0;
          uStack_174 = DAT_1419df7b0._4_4_;
          uStack_170 = DAT_1419df7b8;
          uStack_16c = DAT_1419df7bc;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_178);
        }
        FUN_140e60910(1);
        local_148 = 0x14;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02198);
        uStack_ac = 0xd;
        local_b8 = 0x3ff0000000000000;
        if (&local_b8 != puVar6) {
          local_178 = 0;
          uStack_174 = 0x3ff00000;
          uStack_170 = uStack_b0;
          uStack_16c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_178);
        }
        local_148 = 0x16;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        local_178 = _DAT_141dcafb8;
        uStack_174 = uRam0000000141dcafbc;
        uStack_170 = uRam0000000141dcafc0;
        uStack_16c = DAT_141dcafc4;
        if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_178);
        local_88 = local_128;
        local_178 = _DAT_141dcafd8;
        uStack_174 = uRam0000000141dcafdc;
        uStack_170 = uRam0000000141dcafe0;
        uStack_16c = DAT_141dcafe4;
        if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_178);
        local_80 = local_118;
        local_178 = _DAT_141dcaf88;
        uStack_174 = uRam0000000141dcaf8c;
        uStack_170 = uRam0000000141dcaf90;
        uStack_16c = DAT_141dcaf94;
        if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_178);
        local_78 = local_108;
        local_178 = _DAT_141dcaff8;
        uStack_174 = uRam0000000141dcaffc;
        uStack_170 = uRam0000000141dcb000;
        uStack_16c = DAT_141dcb004;
        if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_178);
        local_70 = local_f8;
        FUN_140e645a0(&local_138,gml_GlobalScript___InputPlugInExecuteCallbacks,local_res8);
        local_178 = local_138;
        uStack_174 = uStack_134;
        uStack_170 = uStack_130;
        uStack_16c = uStack_12c;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_178);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_68 = local_e8;
        gml_Script_InputPlugInError(local_res8,local_res10,&local_168,5,&local_88);
        cVar1 = FUN_140e643f0(local_a8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_a8,&local_res8,&local_res10);
    local_148 = 0x89;
    if (puVar3 != param_3) {
      local_178 = *(undefined4 *)puVar3;
      uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_170 = *(undefined4 *)(puVar3 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_178);
    }
    if (local_98 != 0) {
      FUN_140e4cd60();
      local_98 = 0;
    }
  }
  else {
    local_148 = 7;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc778 + 8))(DAT_141ddc778,DAT_1419fcb48);
    if (puVar3 != param_3) {
      local_138 = *(undefined4 *)puVar3;
      uStack_134 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_130 = *(undefined4 *)(puVar3 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_138);
    }
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

