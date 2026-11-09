// gml_Script_HPad_anon_7087___InputClassVirtualButton___InputClassVirtualButton @ 0x1400584a0

undefined8 *
gml_Script_HPad_anon_7087___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined4 local_118 [3];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_1e0 = "gml_Script_GetPosition@anon@5927@__InputClassVirtualButton@__InputClassVirtualButton"
  ;
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0xc2;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_118,0x10,10,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fe508);
  local_144 = 0xffffff;
  local_150 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc380) {
    _Init_thread_header(&DAT_141ddc380);
    if (DAT_141ddc380 == -1) {
      DAT_141ddc408 = (longlong *)FUN_140e63aa0(DAT_1419fe208);
      _Init_thread_footer(&DAT_141ddc380);
    }
  }
  if (DAT_141ddc032 == '\0') {
    FUN_140e64380(DAT_141ddc408,
                  "gml_Script_GetPosition@anon@5927@__InputClassVirtualButton@__InputClassVirtualButton"
                 );
    FUN_140e64380(param_1,
                  "gml_Script_GetPosition@anon@5927@__InputClassVirtualButton@__InputClassVirtualButton"
                 );
  }
  local_1d8 = 0xc4;
  if (DAT_141ddc032 == '\0') {
    DAT_141ddc032 = '\x01';
    puVar2 = (undefined4 *)(**(code **)(*DAT_141ddc408 + 0x10))(DAT_141ddc408,DAT_1419fe7f8);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_138,
                  gml_Script_Button_anon_6703___InputClassVirtualButton___InputClassVirtualButton,0)
    ;
    if (&local_138 != puVar1) {
      local_1f8 = local_138;
      uStack_1f4 = uStack_134;
      uStack_1f0 = uStack_130;
      uStack_1ec = uStack_12c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_1f8);
    }
    FUN_140e60910(1);
    if (puVar1 != local_118) {
      local_1f8 = *puVar1;
      uStack_1f4 = puVar1[1];
      uStack_1f0 = puVar1[2];
      uStack_1ec = puVar1[3];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1f8);
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_78 = local_118;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1f8);
    local_70 = local_108;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1f8);
    local_68 = local_f8;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1f8);
    local_60 = local_e8;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1f8);
    local_58 = local_d8;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1f8);
    local_50 = local_c8;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1f8);
    local_48 = local_b8;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1f8);
    local_40 = local_a8;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1f8);
    local_38 = local_98;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1f8);
    local_30 = local_88;
    FUN_140e609c0(DAT_141ddc408);
    puVar1 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_128,10,CONCAT44(uVar5,DAT_1419fd6d8),&local_78);
    if (puVar1 != puVar2) {
      local_1f8 = *puVar1;
      uStack_1f4 = puVar1[1];
      uStack_1f0 = puVar1[2];
      uStack_1ec = puVar1[3];
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_1f8);
    }
    FUN_140e60910(1);
  }
  local_1d8 = 0xd0;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe418);
  uVar4 = (**(code **)(*DAT_141ddc408 + 8))(DAT_141ddc408,DAT_1419fe7f8);
  if (puVar3 != &local_150) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_1f8);
  }
  FUN_140e87930(uVar4,DAT_1419fe318,0x80000000,&local_150);
  local_1d8 = 0xd1;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe4d8);
  if (puVar3 != &local_160) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_1f8);
  }
  uVar4 = (**(code **)(*DAT_141ddc408 + 8))(DAT_141ddc408,DAT_1419fe7f8);
  FUN_140e87930(uVar4,DAT_1419fe838,0x80000000,&local_160);
  local_1d8 = 0xd2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe228);
  if (puVar3 != &local_170) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    FUN_140041b80(&local_170,&local_1f8);
  }
  uVar4 = (**(code **)(*DAT_141ddc408 + 8))(DAT_141ddc408,DAT_1419fe7f8);
  FUN_140e87930(uVar4,DAT_1419fe1f8,0x80000000,&local_170);
  local_1d8 = 0xd3;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe678);
  if (puVar3 != &local_180) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    FUN_140041b80(&local_180,&local_1f8);
  }
  uVar4 = (**(code **)(*DAT_141ddc408 + 8))(DAT_141ddc408,DAT_1419fe7f8);
  FUN_140e87930(uVar4,DAT_1419fe4c8,0x80000000,&local_180);
  local_1d8 = 0xd4;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe278);
  if (puVar3 != &local_190) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_1f8);
  }
  uVar4 = (**(code **)(*DAT_141ddc408 + 8))(DAT_141ddc408,DAT_1419fe7f8);
  FUN_140e87930(uVar4,DAT_1419fe5d8,0x80000000,&local_190);
  local_1d8 = 0xd5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe3f8);
  if (puVar3 != &local_1a0) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_1f8);
  }
  uVar4 = (**(code **)(*DAT_141ddc408 + 8))(DAT_141ddc408,DAT_1419fe7f8);
  FUN_140e87930(uVar4,DAT_1419fe5c8,0x80000000,&local_1a0);
  local_1d8 = 0xd6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe328);
  if (puVar3 != &local_1b0) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    FUN_140041b80(&local_1b0,&local_1f8);
  }
  uVar4 = (**(code **)(*DAT_141ddc408 + 8))(DAT_141ddc408,DAT_1419fe7f8);
  FUN_140e86c30(uVar4,DAT_1419fe0e8,0x80000000,&local_1b0);
  local_1d8 = 0xd7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe528);
  if (puVar3 != &local_1c0) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    FUN_140041b80(&local_1c0,&local_1f8);
  }
  uVar4 = (**(code **)(*DAT_141ddc408 + 8))(DAT_141ddc408,DAT_1419fe7f8);
  FUN_140e86c30(uVar4,DAT_1419fe158,0x80000000,&local_1c0);
  local_1d8 = 0xd8;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe368);
  if (puVar3 != &local_1d0) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    FUN_140041b80(&local_1d0,&local_1f8);
  }
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc408 + 8))(DAT_141ddc408,DAT_1419fe7f8);
  FUN_140e87930(puVar3,DAT_1419fe698,0x80000000,&local_1d0);
  local_1d8 = 0xda;
  if (puVar3 != param_3) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

