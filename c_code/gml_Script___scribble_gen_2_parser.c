// gml_Script___scribble_gen_2_parser @ 0x140194fe0

undefined8 *
gml_Script___scribble_gen_2_parser(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 *local_res18;
  undefined1 **ppuVar5;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_e0 = "gml_Script___scribble_gen_11_set_padding_flags";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddd1e0) &&
     (_Init_thread_header(&DAT_141ddd1e0), DAT_141ddd1e0 == -1)) {
    DAT_141ddd1e8 = (longlong *)FUN_140e63aa0(DAT_141a08b08);
    _Init_thread_footer(&DAT_141ddd1e0);
  }
  if (DAT_141ddc092 == '\0') {
    FUN_140e64380(DAT_141ddd1e8,"gml_Script___scribble_gen_11_set_padding_flags");
    FUN_140e64380(local_res8,"gml_Script___scribble_gen_11_set_padding_flags");
  }
  local_d8 = 4;
  if (DAT_141ddc092 == '\0') {
    DAT_141ddc092 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddd1e8 + 0x10))(DAT_141ddd1e8,DAT_141a06b18);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 5;
    local_108 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_100 = DAT_1419df7b8;
    uStack_fc = DAT_1419df7bc;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_108);
    local_res18 = local_78;
    ppuVar5 = &local_res18;
    uVar4 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_d0,1,ppuVar5);
    FUN_140e87440(uVar4,DAT_141a06b58,0x80000000,&local_88,(ulonglong)ppuVar5 & 0xffffffffffffff00,0
                 );
    FUN_140e609c0(DAT_141ddd1e8);
    if (&local_88 != puVar3) {
      local_108 = local_88;
      uStack_100 = uStack_80;
      uStack_fc = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_108);
    }
    FUN_140e60910(1);
  }
  local_d8 = 5;
  uVar4 = (**(code **)(*DAT_141ddd1e8 + 8))(DAT_141ddd1e8,DAT_141a06b18);
  iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_d8 = 7;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a066c8);
      if (puVar3 != &local_a0) {
        local_108 = *puVar3;
        uStack_100 = *(undefined4 *)(puVar3 + 1);
        uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a0);
        }
        FUN_140041b80(&local_a0,&local_108);
      }
      local_d8 = 8;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06758);
      if (puVar3 != &local_b0) {
        local_108 = *puVar3;
        uStack_100 = *(undefined4 *)(puVar3 + 1);
        uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        FUN_140041b80(&local_b0,&local_108);
      }
      local_d8 = 9;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06788);
      if (puVar3 != &local_c0) {
        local_108 = *puVar3;
        uStack_100 = *(undefined4 *)(puVar3 + 1);
        uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        FUN_140041b80(&local_c0,&local_108);
      }
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  local_d8 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05b68);
  uStack_fc = 0xd;
  local_108 = 0;
  if (&local_108 != puVar3) {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = uStack_100;
    uStack_ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
  local_d8 = 0xe;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04ec8);
  uStack_fc = 0xd;
  local_108 = 0x3ff0000000000000;
  if (&local_108 != puVar3) {
    local_f8 = 0;
    uStack_f4 = 0x3ff00000;
    uStack_f0 = uStack_100;
    uStack_ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
  local_d8 = 0x10;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06a68);
  uStack_fc = 0;
  local_108 = 0;
  iVar2 = FUN_140e851f0(uVar4,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar2 == 0) {
    local_d8 = 0x12;
    puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05b68);
    uStack_fc = 0xd;
    local_108 = 0;
    if (&local_108 != puVar3) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = uStack_100;
      uStack_ec = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_f8);
    }
  }
  local_d8 = 0x15;
  uStack_fc = 0;
  local_108 = 0x4000000000000000;
  iVar2 = FUN_140e851f0(uVar4,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar2 == 0) {
    local_d8 = 0x17;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06a68);
    puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04ec8);
    uStack_fc = 0xd;
    local_108 = 0;
    if (&local_108 != puVar3) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = uStack_100;
      uStack_ec = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_f8);
    }
  }
  local_d8 = 0x1a;
  cVar1 = FUN_140e491e0(&local_b0);
  if (cVar1 == '\0') {
    local_d8 = 0x1f;
    cVar1 = FUN_140e491e0(&local_a0);
    if (cVar1 == '\0') {
      local_d8 = 0x2c;
      cVar1 = FUN_140e491e0(&local_c0);
      if (cVar1 == '\0') {
        local_d8 = 0x33;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05388);
        uStack_fc = 0xd;
        local_108 = 0;
        if (&local_108 != puVar3) {
          local_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = uStack_100;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_f8);
        }
        local_d8 = 0x34;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05dd8);
        uStack_fc = 0xd;
        local_108 = 0x3ff0000000000000;
        if (&local_108 != puVar3) {
          local_f8 = 0;
          uStack_f4 = 0x3ff00000;
          uStack_f0 = uStack_100;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_f8);
        }
      }
      else {
        local_d8 = 0x2e;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))();
        uStack_fc = 0xd;
        local_108 = 0x3ff0000000000000;
        if (&local_108 != puVar3) {
          local_f8 = 0;
          uStack_f4 = 0x3ff00000;
          uStack_f0 = uStack_100;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_f8);
        }
        local_d8 = 0x2f;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05dd8);
        uStack_fc = 0xd;
        local_108 = 0;
        if (&local_108 != puVar3) {
          local_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = uStack_100;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_f8);
        }
      }
    }
    else {
      local_d8 = 0x21;
      cVar1 = FUN_140e491e0(&local_c0);
      if (cVar1 == '\0') {
        local_d8 = 0x28;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05388);
        uStack_fc = 0xd;
        local_108 = 0;
        if (&local_108 != puVar3) {
          local_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = uStack_100;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_f8);
        }
        local_d8 = 0x29;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05dd8);
        uStack_fc = 0xd;
        local_108 = 0x3ff0000000000000;
        if (&local_108 != puVar3) {
          local_f8 = 0;
          uStack_f4 = 0x3ff00000;
          uStack_f0 = uStack_100;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_f8);
        }
      }
      else {
        local_d8 = 0x23;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))();
        uStack_fc = 0xd;
        local_108 = 0x3ff0000000000000;
        if (&local_108 != puVar3) {
          local_f8 = 0;
          uStack_f4 = 0x3ff00000;
          uStack_f0 = uStack_100;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_f8);
        }
        local_d8 = 0x24;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05dd8);
        uStack_fc = 0xd;
        local_108 = 0x3ff0000000000000;
        if (&local_108 != puVar3) {
          local_f8 = 0;
          uStack_f4 = 0x3ff00000;
          uStack_f0 = uStack_100;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_f8);
        }
      }
    }
  }
  else {
    local_d8 = 0x1c;
    puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05388);
    uStack_fc = 0xd;
    local_108 = 0x3ff0000000000000;
    if (&local_108 != puVar3) {
      local_f8 = 0;
      uStack_f4 = 0x3ff00000;
      uStack_f0 = uStack_100;
      uStack_ec = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_f8);
    }
    local_d8 = 0x1d;
    puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05dd8);
    uStack_fc = 0xd;
    local_108 = 0x3ff0000000000000;
    if (&local_108 != puVar3) {
      local_f8 = 0;
      uStack_f4 = 0x3ff00000;
      uStack_f0 = uStack_100;
      uStack_ec = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_f8);
    }
  }
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

