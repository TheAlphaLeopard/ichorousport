// gml_Object_sys_imgui_Step_0 @ 0x140e3a9d0

undefined8 *
gml_Object_sys_imgui_Step_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined4 uVar5;
  ulonglong uVar4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88 [2];
  undefined8 local_78 [2];
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_44;
  
  local_60 = "gml_Script_anon@1080@gml_Object_sys_imgui_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x30;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  do {
    local_58 = 0x34;
    if (param_4 < 1) {
      puVar2 = &DAT_1419df7b0;
LAB_140e3aab4:
      local_c8 = *(undefined4 *)puVar2;
      uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_c0 = *(undefined4 *)(puVar2 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)local_78[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_c8);
    }
    else {
      puVar2 = (undefined8 *)*param_5;
      if (puVar2 != local_78) goto LAB_140e3aab4;
    }
    local_a0 = local_78;
    ppuVar3 = &local_a0;
    puVar2 = (undefined8 *)gml_Script_current_ms(param_1,param_2,&local_e8,1,ppuVar3);
    uVar5 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
    if (puVar2 != &local_b8) {
      local_c8 = *(undefined4 *)puVar2;
      uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_c0 = *(undefined4 *)(puVar2 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_c8);
    }
    local_58 = 0x35;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if (param_4 < 1) {
      puVar2 = &DAT_1419df7b0;
LAB_140e3ab81:
      local_c8 = *(undefined4 *)puVar2;
      uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_c0 = *(undefined4 *)(puVar2 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)local_88[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_c8);
    }
    else {
      puVar2 = (undefined8 *)*param_5;
      if (puVar2 != local_88) goto LAB_140e3ab81;
    }
    local_a8 = local_88;
    local_a0 = &local_b8;
    ppuVar3 = &local_a8;
    uVar4 = CONCAT44(uVar5,DAT_141a01138);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar4,ppuVar3);
    if (puVar2 != &local_d8) {
      local_c8 = *(undefined4 *)puVar2;
      uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_c0 = *(undefined4 *)(puVar2 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_c8);
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(&local_d8,DAT_141a0ab58,0x80000000,&local_98,uVar4,
                  (ulonglong)ppuVar3 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar4 >> 0x20);
    local_44 = 0;
    local_50 = 0;
    iVar1 = FUN_140e851f0(&local_98,&local_50,DAT_141955260,1);
    if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    if (0 < iVar1) {
      local_58 = 0x3a;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      local_a8 = &local_d8;
      puVar2 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar5,DAT_1419fd0c8),&local_a8);
      if (puVar2 != param_3) {
        local_c8 = *(undefined4 *)puVar2;
        uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
        uStack_c0 = *(undefined4 *)(puVar2 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_c8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_68;
      return param_3;
    }
  } while( true );
}

