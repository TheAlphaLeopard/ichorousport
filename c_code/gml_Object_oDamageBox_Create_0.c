// gml_Object_oDamageBox_Create_0 @ 0x1408df940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDamageBox_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 *local_res18;
  code *pcVar4;
  undefined1 **in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [16];
  longlong local_30;
  
  local_60 = "gml_Object_oCutsceneGameIntro_Step_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  pcVar4 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_58 = 1;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
  local_9c = DAT_141dd7a14;
  local_a0 = DAT_141dd7a10;
  if ((1 << ((byte)DAT_141dd7a14 & 0x1f) & 0x46U) == 0) {
    local_a8 = DAT_141dd7a08;
  }
  else {
    FUN_1400419b0(&local_a8,&DAT_141dd7a08);
  }
  iVar2 = FUN_140e851f0(uVar3,&local_a8,DAT_141955260,0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (iVar2 == 0) {
    local_58 = 3;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a58370);
    iVar2 = FUN_140e63cb0(local_40,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_58 = 5;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a09408);
        cVar1 = FUN_140e491e0(uVar3);
        if (cVar1 != '\0') {
          local_58 = 6;
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
          local_98 = 0;
          local_90 = 0;
          local_8c = 5;
          local_9c = 6;
          local_a8 = local_res10;
          FUN_140e87440(&local_a8,DAT_141a58360,0x80000000,&local_88,
                        (ulonglong)pcVar4 & 0xffffffffffffff00,
                        (ulonglong)in_stack_ffffffffffffff50 & 0xffffffffffffff00);
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          local_50 = _DAT_141dd7a18;
          uStack_4c = uRam0000000141dd7a1c;
          uStack_48 = uRam0000000141dd7a20;
          uStack_44 = DAT_141dd7a24;
          if ((1 << (local_78[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_78);
          }
          FUN_140041b80(local_78,&local_50);
          local_res18 = local_78;
          in_stack_ffffffffffffff50 = &local_res18;
          pcVar4 = (code *)&local_88;
          FUN_140e63610(local_res10,local_res10,&local_98,1,pcVar4,in_stack_ffffffffffffff50);
        }
        cVar1 = FUN_140e643f0(local_40,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_40,&local_res8,&local_res10);
    if (local_30 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

