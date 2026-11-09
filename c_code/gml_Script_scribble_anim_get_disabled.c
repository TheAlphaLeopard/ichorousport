// gml_Script_scribble_anim_get_disabled @ 0x140452610

undefined8 *
gml_Script_scribble_anim_get_disabled
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 **ppuVar6;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  undefined1 *local_50 [3];
  
  local_c0 = "gml_Script_scribble_anim_disabled";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 5;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeed4) &&
     (_Init_thread_header(&DAT_141ddeed4), DAT_141ddeed4 == -1)) {
    DAT_141ddeed8 = (longlong *)FUN_140e63aa0(DAT_1419f76a8);
    _Init_thread_footer(&DAT_141ddeed4);
  }
  if (DAT_141ddc177 == '\0') {
    FUN_140e64380(DAT_141ddeed8,"gml_Script_scribble_anim_disabled");
    FUN_140e64380(local_res8,"gml_Script_scribble_anim_disabled");
  }
  local_b8 = 7;
  if (DAT_141ddc177 == '\0') {
    DAT_141ddc177 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddeed8 + 0x10))(DAT_141ddeed8,DAT_141a04cd8);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
    local_50[0] = local_88;
    ppuVar6 = local_50;
    uVar4 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_f8,1,ppuVar6);
    FUN_140e87440(uVar4,DAT_141a05158,0x80000000,&local_d8,(ulonglong)ppuVar6 & 0xffffffffffffff00,0
                 );
    FUN_140e609c0(DAT_141ddeed8);
    if (&local_d8 != puVar3) {
      local_e8 = local_d8;
      uStack_e0 = uStack_d0;
      uStack_dc = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_e8);
    }
    FUN_140e60910(1);
  }
  local_b8 = 9;
  uVar4 = (**(code **)(*DAT_141ddeed8 + 8))(DAT_141ddeed8,DAT_141a04cd8);
  iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_b8 = 0xb;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05d28);
      if (param_4 < 1) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)*param_5;
      }
      iVar2 = FUN_140e851f0(uVar4,puVar3,DAT_141955260,0);
      if (iVar2 != 0) {
        local_b8 = 0xd;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05d28);
        FUN_140e609c0(local_res8);
        if (param_4 < 1) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)*param_5;
        }
        if (puVar5 != puVar3) {
          local_a8 = *(undefined4 *)puVar5;
          uStack_a4 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_a0 = *(undefined4 *)(puVar5 + 1);
          uStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_a8);
        }
        FUN_140e60910(1);
        local_b8 = 0xe;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05818);
        uStack_dc = 0xd;
        local_e8 = 0x3ff0000000000000;
        if (&local_e8 != puVar3) {
          local_a8 = 0;
          uStack_a4 = 0x3ff00000;
          uStack_a0 = uStack_e0;
          uStack_9c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_a8);
        }
      }
      cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

