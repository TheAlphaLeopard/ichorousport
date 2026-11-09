// gml_Script_InputOldest @ 0x14033e1c0

undefined8 *
gml_Script_InputOldest
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_70 = "gml_Script_InputMouseSetBlocked";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 7;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde44c) &&
     (_Init_thread_header(&DAT_141dde44c), DAT_141dde44c == -1)) {
    DAT_141dde450 = (longlong *)FUN_140e63aa0(DAT_1419f1ff8);
    _Init_thread_footer(&DAT_141dde44c);
  }
  if (DAT_141ddc103 == '\0') {
    FUN_140e64380(DAT_141dde450,"gml_Script_InputMouseSetBlocked");
    FUN_140e64380(local_res8,"gml_Script_InputMouseSetBlocked");
  }
  local_68 = 9;
  if (DAT_141ddc103 == '\0') {
    DAT_141ddc103 = '\x01';
    puVar3 = (undefined4 *)(**(code **)(*DAT_141dde450 + 0x10))(DAT_141dde450,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde450);
    puVar4 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_98,0,0);
    if (puVar4 != puVar3) {
      local_88 = *puVar4;
      uStack_84 = puVar4[1];
      uStack_80 = puVar4[2];
      uStack_7c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_88);
    }
    FUN_140e60910(1);
  }
  local_68 = 10;
  uVar5 = (**(code **)(*DAT_141dde450 + 8))(DAT_141dde450,DAT_1419fcb48);
  iVar2 = FUN_140e63cb0(local_60,&local_res8,&local_res10,uVar5);
  if (0 < iVar2) {
    do {
      local_68 = 0xc;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02b68);
      FUN_140e609c0(local_res8);
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*param_5;
      }
      if (puVar7 != puVar6) {
        local_88 = *(undefined4 *)puVar7;
        uStack_84 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_80 = *(undefined4 *)(puVar7 + 1);
        uStack_7c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_88);
      }
      FUN_140e60910(1);
      local_68 = 0xd;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02bc8);
      FUN_140e609c0(local_res8);
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*param_5;
      }
      if (puVar7 != puVar6) {
        local_88 = *(undefined4 *)puVar7;
        uStack_84 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_80 = *(undefined4 *)(puVar7 + 1);
        uStack_7c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_88);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_60,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_60,&local_res8,&local_res10);
  if (local_50 != 0) {
    FUN_140e4cd60();
    local_50 = 0;
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

