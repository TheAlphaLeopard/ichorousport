// gml_Object_oBloodWriting_Draw_0 @ 0x1406ebad0

void gml_Object_oBloodWriting_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar6;
  longlong *plVar5;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  longlong local_28;
  
  local_90 = "gml_Object_oBloodwark_Step_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_88 = 2;
  uStack_ec = 0xf;
  local_f8 = 0x1000000000000ee;
  FUN_140e87170(&local_f8,DAT_1419fe0e8,0x80000000,&local_68,local_res8,local_res10);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = local_68;
  uStack_f0 = uStack_60;
  uStack_ec = uStack_5c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_f8);
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_c8);
  local_88 = 3;
  uStack_ec = 0xf;
  local_f8 = 0x1000000000000ee;
  plVar5 = local_res8;
  FUN_140e87170(&local_f8,DAT_1419fe158,0x80000000,&local_78,local_res8,local_res10);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = local_78;
  uStack_f0 = uStack_70;
  uStack_ec = uStack_6c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_f8);
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_d8);
  local_88 = 5;
  uStack_ec = 0xf;
  local_f8 = 0x1000000000000ee;
  iVar2 = FUN_140e63cb0(local_38,&local_res8,&local_res10,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (0 < iVar2) {
    do {
      uVar6 = (undefined4)((ulonglong)plVar5 >> 0x20);
      local_88 = 7;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57530);
      if (puVar3 != &local_b8) {
        local_f8 = *puVar3;
        uStack_f0 = *(undefined4 *)(puVar3 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)_local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_f8);
      }
      local_58 = &local_b8;
      plVar5 = (longlong *)CONCAT44(uVar6,DAT_141a57c30);
      FUN_140e634e0(local_res8,local_res10,&local_e8,1,plVar5,&local_58);
      cVar1 = FUN_140e643f0(local_38,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_38,&local_res8,&local_res10);
  local_88 = 0xb;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_ec = 0xf;
  local_f8 = 0x100000100000067;
  local_48 = 0x67;
  uStack_44 = 0x1000001;
  uStack_40 = uStack_f0;
  uStack_3c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_48);
  local_58 = &local_b8;
  local_48 = (undefined4)DAT_1419df7b0;
  uStack_44 = DAT_1419df7b0._4_4_;
  uStack_40 = DAT_1419df7b8;
  uStack_3c = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_48);
  local_50 = local_a8;
  uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_e8,2,&local_58);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_88 = 0xd;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  if (local_28 != 0) {
    FUN_140e4cd60();
    local_28 = 0;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

